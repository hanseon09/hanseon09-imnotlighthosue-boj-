#include<iostream>
#include<algorithm>
using namespace std;

int N, K;
int a, b;
int seg[(1<<18)];
int init(int node, int s, int e) 
{
    if (s == e) return seg[node] = 1;
    int mid = (s + e) / 2;
    return seg[node] = init(2 * node, s, mid) + init(2 * node + 1, mid + 1, e);
}


int update(int node, int s, int e, int del) 
{
    seg[node]--;
    if (s == e) return 0;
    else
    {
        int mid = (s + e) / 2;
        if (del <= mid) return update(2 * node, s, mid, del);
        else return update(2 * node + 1, mid + 1, e, del);
    }
}

int query(int node, int s, int e, int order) 
{
    if (s == e) return s; 
    int mid = (s + e) / 2;

    if (order <= seg[2 * node]) return query(2 * node, s, mid, order);
    else return query(2 * node + 1, mid + 1, e, order - seg[2 * node]);

}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie();

    cin >> N >> K;

    init(1, 1, N); 

    int index = 1;

    cout << "<";

    for (int i = 0; i < N; i++)
    {

        int size = N - i; 
        index += K - 1;

        if (index % size == 0) index = size;
        else if (index > size) index %= size;
            

   
        int num = query(1, 1, N, index);


        update(1, 1, N, num);
          
        if (i == N - 1) cout << num;
        else cout << num << ", ";
    }
    cout << ">";
}
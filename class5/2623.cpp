#include<iostream>
#include<queue>
#include<vector>
 
#define endl "\n"
#define MAX 1010
using namespace std;
 
int N, M;
int Entry[MAX];
vector<int> V[MAX];
 
void Input()
{
    cin >> N >> M;
    for (int i = 0; i < M; i++)
    {
        vector<int> Temp;
        int Num; cin >> Num;
        for (int j = 0; j < Num; j++)
        {
            int a; cin >> a;
            Temp.push_back(a);
        }
        for (int j = 0; j < Temp.size(); j++)
        {
            for (int k = j + 1; k < Temp.size(); k++)
            {
                V[Temp[j]].push_back(Temp[k]);
                Entry[Temp[k]]++;
            }
        }
    }
}
 
void Solution()
{
    queue<int> Q;
    for (int i = 1; i <= N; i++)
    {
        if (Entry[i] == 0) Q.push(i);
    }
 
    vector<int> Answer;
    while (Q.empty() == 0)
    {
        int Num = Q.front();
        Q.pop();
        Answer.push_back(Num);
 
        for (int i = 0; i < V[Num].size(); i++)
        {
            int Next = V[Num][i];
            Entry[Next]--;
 
            if (Entry[Next] == 0) Q.push(Next);
        }
    }
    if (Answer.size() != N) cout << 0 << endl;
    else
    {
        for (int i = 0; i < Answer.size(); i++) cout << Answer[i] << endl;
    }
}
 
void Solve()
{
    Input();
    Solution();
}
 
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
 
    
    Solve();
 
    return 0;
}

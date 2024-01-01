#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
#include<map>
#include <set>
using namespace std;

int row;
int col;

int arr[51][51];
int cache[51][51];


vector<int> sum1;
vector<int> sum2;


void calLeftUp(int x, int y)
{
    for (int i = x; i >= 0; i--)
    {
        int rowSum = 0;
        for (int j = y; j >= 0; j--)
        {
            rowSum += arr[i][j];

            if (i != x)
                cache[i][j] = cache[i + 1][j] + rowSum;
            else
                cache[i][j] = rowSum;

            sum1.push_back(cache[i][j]);
        }
    }
}


void calRightDown(int x, int y)
{

    for (int i = x; i < row; i++)
    {
        int rowSum = 0;
        for (int j = y; j < col; j++)
        {
            rowSum += arr[i][j];

            if (i != x)
                cache[i][j] = cache[i - 1][j] + rowSum;
            else
                cache[i][j] = rowSum;

            sum2.push_back(cache[i][j]);
        }
    }

}


void calRightUp(int x, int y)
{

    for (int i = x; i >= 0; i--)
    {
        int rowSum = 0;
        for (int j = y; j < col; j++)
        {
            rowSum += arr[i][j];

            if (i != x)
                cache[i][j] = cache[i + 1][j] + rowSum;
            else
                cache[i][j] = rowSum;

            sum1.push_back(cache[i][j]);
        }
    }

}


void calLeftDown(int x, int y)
{

    for (int i = x; i < row; i++)
    {
        int rowSum = 0;
        for (int j = y; j >= 0; j--)
        {
            rowSum += arr[i][j];

            if (i != x)
                cache[i][j] = cache[i - 1][j] + rowSum;
            else
                cache[i][j] = rowSum;

            sum2.push_back(cache[i][j]);
        }
    }

}

void solve()
{
    int sum = 0;

    // 
    for (int i = 0; i < row - 1; i++)
    {
        for (int j = 0; j < row - 1; j++)
        {
           
            calLeftUp(i, j);
            calRightDown(i + 1, j + 1);

            vector<int>::iterator iter1;
            vector<int>::iterator iter2;

            
            for (iter1 = sum1.begin(); iter1 != sum1.end(); ++iter1)
            {
                for (iter2 = sum2.begin(); iter2 != sum2.end(); ++iter2)
                {
                    if (*iter1 == *iter2)
                        sum++;
                }
            }

            sum1.clear();
            sum2.clear();

           
            calRightUp(i, j + 1);
            calLeftDown(i + 1, j);

        
            for (iter1 = sum1.begin(); iter1 != sum1.end(); ++iter1)
            {
                for (iter2 = sum2.begin(); iter2 != sum2.end(); ++iter2)
                {
                    if (*iter1 == *iter2)
                        sum++;
                }
            }
            sum1.clear();
            sum2.clear();
        }
    }

    cout << sum << endl;
}



int main() {
    cin >> row;
    col = row;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < row; j++)
        {
            cin >> arr[i][j];
        }
    }

    solve();

    return 0;
}
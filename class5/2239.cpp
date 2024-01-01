#include <iostream>
using namespace std;
#include <vector>
#include <cstdio>

char a[10][10];
int b[10][10];
typedef struct _cor
{
    int x;
    int y;
} Cor;
vector<Cor> arr;

int check(int num, int row, int col)
{
    // row
    for (int i = 0; i < 9; i++)
    {
        if (b[row][i] == num)
            return 0;
    }

    // col
    for (int j = 0; j < 9; j++)
    {
        if (b[j][col] == num)
            return 0;
    }
    // 사각형

    for (int i = 0; i < 9; i++)
    {
        int nextx = i / 3 + (row / 3) * 3;
        int nexty = (col / 3) * 3 + i % 3;
        if (b[nextx][nexty] == num)
            return 0;
    }
    return 1;
}

void go(int cnt)
{
    if (cnt == arr.size())
    {
        for (int i = 0; i < 9; i++)
        {
            for (int j = 0; j < 9; j++)
            {
                cout << b[i][j];
            }
            cout << "\n";
        }
        exit(0);
    }

    for (int i = 1; i <= 9; i++)
    {

        int tempx = arr[cnt].x;
        int tempy = arr[cnt].y;
        if (check(i, tempx, tempy))
        {
            b[tempx][tempy] = i;
            go(cnt + 1);
            b[tempx][tempy] = 0;
        }
    }
}
int main(void)
{
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            cin >> a[i][j];
            b[i][j] = a[i][j] - '0';
        }
    }

    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            if (b[i][j] == 0)
            {
                Cor temp = {i, j};
                arr.push_back(temp);
            }
        }
    }

    go(0);
    return 0;
}
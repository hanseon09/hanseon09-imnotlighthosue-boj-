#include <iostream>
#include <algorithm>
using namespace std;

const int MAX = 8;

int N, M;
int arr[MAX];
int visited[MAX];

void func(int idx, int start, int cnt)
{
	if (cnt == M)
	{
		for (int i = 0; i < M; i++)
		{
			cout << arr[visited[i]] << " ";
		}
		cout << "\n";

		return;
	}

	if (idx == N)
	{
		return;
	}

	for (int i = start; i < N; i++)
	{
		visited[idx] = i;

		func(idx + 1, i, cnt + 1);
	}
}

int main(void)
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cin >> N >> M;

	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
	}

	sort(arr, arr + N);

	func(0, 0, 0);

	return 0;
}
// 1027번 고층 건물
// c++
#include <iostream>
#include <vector>
#include <algorithm>

void solve(void);

int main(void)
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);

	solve();
}

void solve(void)
{
	int n;
	std::cin >> n;

	std::vector<int> buildings;
	for (int i = 0; i < n; i++)
	{
		int temp;
		std::cin >> temp;

		buildings.push_back(temp);
	}

	std::vector<int> count(n);
	for (int i = 0; i < n; i++)
	{
		double maxGradient = -1000000000;

		for (int j = i + 1; j < n; j++)
		{
			int h = buildings[j] - buildings[i];
			int w = j - i;
			double g = h * 1.0 / w;

			if (g <= maxGradient)
				continue;

			maxGradient = g;
			count[i]++; count[j]++;
		}
	}
	
	std::cout << *max_element(count.begin(), count.end());
}

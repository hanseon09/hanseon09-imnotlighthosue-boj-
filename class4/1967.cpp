#include <iostream>
#include <vector>
using namespace std;

int nodeCnt;
vector<pair<int, int>> adjList[10001];
bool visit[10001][10001];
int ans;

void dfs(int startNode, int curNode, int curDist) {
	visit[startNode][curNode] = true;
	ans = max(ans, curDist);

	for (pair<int, int> p : adjList[curNode]) {
		int nodeNum = p.first;
		int nodeDist = p.second;
		if (!visit[startNode][nodeNum]) {
			dfs(startNode, nodeNum, curDist + nodeDist);
		}
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> nodeCnt;

	int parNode, childNode, distance;
	for (int i = 1; i < nodeCnt; i++) {
		cin >> parNode >> childNode >> distance;
		adjList[parNode].push_back({ childNode, distance });
		adjList[childNode].push_back({ parNode, distance });
	}

	for (int i = 1; i <= nodeCnt; i++) {
		dfs(i, i, 0);
	}

	cout << ans;

	return 0;
}
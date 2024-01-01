#include <iostream>
#include<vector>
#include <algorithm>
#include<cmath>
#include<queue>
using namespace std;
#define ll long long

int CCW(pair<ll, ll> p1, pair<ll, ll> p2, pair<ll, ll> p3)
{
	ll temp = p1.first * p2.second + p2.first * p3.second + p3.first * p1.second;

	temp = temp - p1.second * p2.first - p2.second * p3.first - p3.second * p1.first;

	if (temp > 0) return 1; // 반시계
	else if (temp == 0) return 0; 
	else if (temp < 0) return -1; 
}

int main() {

	
	pair<int, int> A;
	pair<int, int> B;
	pair<int, int> C;
	pair<int, int> D;
	cin >> A.first >> A.second;
	cin >> B.first >> B.second;
	cin >> C.first >> C.second;
	cin >> D.first >> D.second;
	
	
	int abc = CCW(A,B,C);
	int abd = CCW(A,B,D);

    int cda = CCW(C,D,A);

	int cdb = CCW(C,D,B);

	if (abc * abd == 0 && cda * cdb == 0)
	{
		if (A > B)swap(A, B);
		if (C > D)swap(C, D);

		if (A <= D && C <= B)
		{
			cout << 1 << endl;
		}
		else
		{
			cout << 0 << endl;
		}
		return 0;
	}
	

	if (abc * abd <= 0 && cda * cdb <= 0)
	{
		cout << 1 << endl;
	}
	else
		cout << 0 << endl;
}
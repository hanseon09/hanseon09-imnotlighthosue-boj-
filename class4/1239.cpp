#include <stdio.h>
#include <vector>
#include <queue>

using namespace std;

struct edge{int end; int cost;};

int main (void)
{
	vector <edge> come[1001];
	vector <edge> back[1001];
	int d1[1001]={0,};
	int d2[1001]={0,};
	queue <edge> que;
	int N,M,X;
	int a,b,c;
	int max;
	edge ed1,ed2;
	scanf("%d %d %d",&N,&M,&X);
	while(M--)
	{
		scanf("%d %d %d",&a,&b,&c);
		ed1.end=b;
		ed1.cost=c;
		ed2.end=a;
		ed2.cost=c;
		come[a].push_back(ed1);
		back[b].push_back(ed2);
	}
	for(int i=1; i<=N; i++)
	{
		d1[i]=1000000;
		d2[i]=1000000;
	}
	ed1.cost=0;
	ed1.end=X;
	d1[X]=0;
	que.push(ed1);
	while(!que.empty())
	{
		ed1=que.front();
		que.pop();
		for(int i=0; i<come[ed1.end].size(); i++)
		{
			ed2=come[ed1.end][i];
			if(d1[ed2.end]>d1[ed1.end]+ed2.cost)
			{
				d1[ed2.end]=d1[ed1.end]+ed2.cost;
				ed2.cost=d1[ed1.end]+ed2.cost;
				que.push(ed2);
			}
		}
	}
	ed1.cost=0;
	ed1.end=X;
	d2[X]=0;
	que.push(ed1);
	while(!que.empty())
	{
		ed1=que.front();
		que.pop();
		for(int i=0; i<back[ed1.end].size(); i++)
		{
			ed2=back[ed1.end][i];
			if(d2[ed2.end]>d2[ed1.end]+ed2.cost)
			{
				d2[ed2.end]=d2[ed1.end]+ed2.cost;
				ed2.cost=d2[ed1.end]+ed2.cost;
				que.push(ed2);
			}
		}
	}
	max=0;
	for(int i=1; i<=N; i++)
	{
		if(max<d1[i]+d2[i])
			max=d1[i]+d2[i];
	}
	printf("%d",max);
	return 0;
}
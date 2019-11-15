#include <iostream>
#include <vector>
using namespace std;


const int INF = 987654321;

int main()
{
	int d[51][51];
	int n;
	cin >> n;
	
	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= n; j++)
		{
			d[i][j] = INF;
		}
		d[i][i] = 0;
	}
	
	while(1)
	{
		int u, v;
		cin >> u >> v;
		d[u][v] = 1;
		d[v][u] = 1;
		if(u == -1 && v == -1)
		{
			break;
		}
	}
	
	for(int k = 1; k <= n; k++)
	{
		for(int i = 1; i <= n; i++)
		{
			for(int j = 1; j <= n; j++)
			{
				d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
			}
		}
	}
	
	int minScore = n;
	vector<int> elected;
	
	for(int i=1; i <= n; i++)
	{
		int score = 0;
		for(int j=1; j <= n; j++)
			score = max(score, d[i][j]);

		if(minScore > score)
		{
			minScore = score;
			elected.clear();
		}
		if(minScore == score)
			elected.push_back(i);
	}
	
	printf("%d %d\n", minScore, elected.size());
	for(int i=0; i < elected.size(); i++)
		printf("%d ", elected[i]);
}

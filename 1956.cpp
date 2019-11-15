#include <iostream>

using namespace std;

int main()
{
	const int INF = 987654321;
	int ret = INF;
	int V, E;
	cin >> V >> E;
	int d[401][401];
	
	for(int i = 1; i <= V; i++)
	{
		for(int j = 1; j <= V; j++)
		{
			if(i != j)
			{
				d[i][j] = INF;
			}
		}
	}
	
	for(int i = 1; i <= E; i++)
	{
		int a, b, c;
		cin >> a >> b >> c;
		d[a][b] = c;
	}
	
	for(int k = 1; k <= V; k++)
	{
		for(int i = 1; i <= V; i++)
		{
			for(int j = 1; j <= V; j++)
			{
				d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
			}
		}
	}
	
	for(int i = 1; i <= V; i++)
	{
		for(int j = 1; j <= V; j++)
		{
			if(i == j) continue;
			if(d[i][j] != INF && d[j][i] != INF)
			{
				ret = min(ret, d[i][j] + d[j][i]);
			}
		}
	}
	
	if(ret == INF)
	{
		cout << "-1" << endl;
	}
	
	else
	{
		cout << ret << endl;
	}
}

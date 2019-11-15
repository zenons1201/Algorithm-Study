#include <iostream>

using namespace std;

int main()
{
	const int INF = 98765;
	int d[1001][1001];
	int N, M, X, n, m, x;
	int ans = 0;
	
	cin >> N;
	for(int i = 1; i <= N; i++)
	{
		for(int j = 1; j <= N; j++)
		{
			if(i != j)
			{
		     	d[i][j] = INF;
		    }
		}
	}

    cin >> M >> X;
    
	for(int i = 1; i <= M; i++)
	{
		cin >> n >> m >> x;
		if(d[n][m] > x)
		  d[n][m] = x;
	}
	
	for(int k = 1; k <= N; k++)
	{
		for(int i = 1; i <= N; i++)
		{
			for(int j = 1; j <= N; j++)
			{
				if(d[i][j] > d[i][k] + d[k][j])
				{
					d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
				}
			}
		}
	}
	
	for(int i = 1; i <= N; i++)
	{
		ans = max(ans, d[i][X] + d[X][i]);
	}
	
	cout << ans << endl;
}

#include <iostream>


using namespace std;

int N, E;
int dist[801][801] = { 0, };
const int INF = 0xfffffff;

int main()
{
	cin >> N >> E;

	for (int i = 1; i <= N; i++)
	{
		for (int j = 1; j <= N; j++)
		{
			if (i != j)
			{
				dist[i][j] = INF;
			}
		}
	}

	for (int i = 1; i <= E; i++)
	{
		int a, b, c;
		cin >> a >> b >> c;
		dist[a][b] = c;
		dist[b][a] = c;
	}

	for (int k = 1; k <= N; k++)
	{
		for (int i = 1; i <= N; i++)
		{
			for (int j = 1; j <= N; j++)
			{
				if (dist[i][j] > dist[i][k] + dist[k][j])
				{
					dist[i][j] = dist[i][k] + dist[k][j];
				}
			}
		}
	}

	int a, b;
	cin >> a >> b;

	int ans = min(dist[1][a] + dist[a][b] + dist[b][N], dist[1][b] + dist[a][b] + dist[a][N]);
	if (ans >= INF)
		cout << -1 << endl;

	else
		cout << ans << endl;
}


#include <iostream>
using namespace std;

int main()
{
	int ans = 0;
	int d[101][101];
	int N;
	cin >> N;
	int M;
	cin >> M;
	for(int i = 1; i <= M; i++)
	{
		int a, b;
		cin >> a >> b;
		d[a][b] = 1;
	}
	
	for(int k = 1; k <= N; k++)
	{
		for(int i = 1; i <= N; i++)
		{
			for(int j = 1; j <= N; j++)
			{
				if(d[i][k] && d[k][j])
				{
					d[i][j] = 1;
				}
			}
		}
	}
	
	for(int i = 1; i <= N; i++)
	{
		int ans = 0;
		for(int j = 1; j <= N; j++)
		{
			if(!d[i][j] && !d[j][i])
			{
				ans++;
			}
		}
		cout << ans - 1 << endl;
	}
}

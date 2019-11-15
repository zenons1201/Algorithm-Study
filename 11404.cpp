#include <iostream>

using namespace std;

int main()
{
	const int INF = 987654321;
	int d[101][101];
	int n, m;
	cin >> n >> m;
	
	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= n; j++)
		{
			d[i][j] = INF;
			if(i == j)
			{
				d[i][j] = 0;
			}
		}
	}
	
	for(int i = 1; i <= m; i++)
	{
		int a, b, c;
		cin >> a >> b >> c;
		if(d[a][b] > c)
		d[a][b] = c;
	}
	
	for(int k = 1; k<= n; k++)
	{
		for(int i = 1; i <= n; i++)
		{
			for(int j = 1; j <= n; j++)
			{ 
				d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
			}
		}
	}
	
	for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (d[i][j] == INF)
                cout << 0 << " ";
            else
                cout << d[i][j] << " ";
        }
        cout << endl;
    }
}

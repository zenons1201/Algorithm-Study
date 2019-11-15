#include <iostream>

using namespace std;

int main()
{
	const int INF = 98765432;
	int ans = 0;
   int d[501][501];
   int n, m;
   cin >> n >> m;
   
   for(int i = 1; i <= n; i++)
  	{
  		for(int j = 1; j <= n; j++)
  		{
  			if(i != j)
  			{
  				d[i][j] = INF;
			}
  		}
	}
	
   for(int i = 1; i <= m; i++)
   {
   	   int a, b;
   	   cin >> a >> b;
   	   d[a][b] = 1;
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
  
  	for(int i = 1; i <= n; i++)
  	{
  		int flag = 1;
  		for(int j = 1; j <= n; j++)
  		{
  			if(d[i][j] == INF && d[j][i] == INF)
  			{
  				flag = 0;
			}
  		}
  		if(flag) ans++;
	}
	cout << ans << endl;
}

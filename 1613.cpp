#include <iostream>

using namespace std;

int main()
{
	const int INF = 98765432;
	int d[401][401];
	int n, k;
	scanf("%d %d", &n, &k);
	
	for(int i = 1; i <= k; i++)
	{
		int a, b;
		scanf("%d %d", &a, &b);
		d[a][b] = -1;
		d[a][b] = 1;
	}
	
	for(int s = 1; s <= n; s++)
	{
		for(int i = 1; i <= n; i++)
		{
			for(int j = 1; j <= n; j++)
			{
				if(d[i][k] == -1 && d[k][j] == -1)
				{
					d[i][j] = -1;
					d[j][i] = 1;
				}
			}
		}
	}
	
	int s;
	cin >> s;
	
	for(int i = 1; i <= s; i++)
	{
		int a, b;
		cin >> a >> b;
		if(d[a][b] == 0)
		{
			printf("0 \n");
		}

		else
		{
			printf("%d \n", d[a][b]);
		}
	
     }
 }

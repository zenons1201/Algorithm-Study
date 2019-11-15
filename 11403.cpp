#include <iostream>

using namespace std;

int main()
{
	int N;
	cin >> N;
	int d[101][101];
	for(int i = 1; i <= N; i++)
	{
		for(int j = 1; j <= N; j++)
		{
			cin >> d[i][j];
		}
	}
	
	for(int k = 1; k <= N; k++)
	{
		for(int i = 1; i <= N; i++)
		{
			for(int j = 1; j <= N; j++)
			{
				if(d[i][k] == 1 && d[k][j] == 1)
				{
					d[i][j] = 1;
				}
			}
		}
	}
	
	for(int i = 1; i <= N; i++)
	{
		for(int j = 1; j <= N; j++)
		{
			cout << d[i][j] << " ";
		}
		printf("\n");
	}
	
}


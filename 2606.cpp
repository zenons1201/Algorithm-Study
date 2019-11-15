#include <iostream>

using namespace std;

int main()
{
	const int INF = 987654321;
	int d[101][101];
    int N;
    cin >> N;
    int P;
    cin >> P;
   int cnt = 0;
   for(int i = 1; i <= N; i++)
   {
    	for(int j = 1; j <= N; j++)
   	    {
   	    	if(i != j)
   	    	{
   	    		d[i][j] == INF;
			}
     	}
   }
   
    for(int i = 1; i <= P; i++)
    {
   	  int x, y;
   	  cin >> x >> y;
   	  d[x][y] = 1;
   	  d[y][x] = 1;
    }   
   	
   	for(int k = 1; k <= N; k++)
   	{
   		for(int i = 1; i <= N; i++)
   		{
   			for(int j = 1; j <= N; j++)
   			{				
   				if(d[k][j] == 1 && d[i][k] == 1)
   				{
   					d[i][j] = 1;
				}
			}
	    }
   }
   
   for(int i = 2; i <= N; i++)
   {
    	if(d[1][i] == 1)
    	{
    		cnt++;
		}
   }
   
   cout << cnt << endl;
}

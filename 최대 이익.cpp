#include <iostream>

using namespace std;

int IVST[21][300];
int r[21][300];
void Resource Allocation(int startup, int invest)
{
	int max = 0;
	int t;
	for(int i = 0; i <= invest; i++)
	{
		for(int i = 1; i <= startup; i++)
		{
			for(int j = 1; j <= invest; j++)
			{
				max = 0;
				for(int k = 0; k <= j; k++)
				{
					t = IVST[i-1][k] + r[i][j-k];
					if(t > max)
					{
						max = t;
					}
					IVST[i][j] = max;
				}
			}
		}
	}
}
int main()
{
	
}

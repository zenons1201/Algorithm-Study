#include <iostream>

using namespace std;

int N, M;
int maps[50][50];
int cnt = 0;
int ret = 9999;
int Again_Painted(int sx, int sy, int ex, int ey)
{
	for(int i = sx; i < ex - 1; i++)
	{
		for(int j = sy; j < ey - 1; j++)
		{
			if(maps[i][j] != maps[i+1][j+1])
			{
				cnt++;
			}
		}
	}
	ret = min(ret, cnt);
	Again_Painted(sx + 1, sy, ex + 1, ey);
	Again_Painted(sx, sy + 1, ex, ey + 1);
	Again_Painted(sx+1, sy + 1, ex + 1, ey + 1);
	
	return ret;
}
int main()
{
	cin >> N >> M;
	
	for(int i = 0; i < N; i++)
	{
		for(int j = 0; j < M; j++)
		{
			cin >> maps[i][j];
		}
	}
	
	cout << Again_Painted(0, 0, N-1, M-1) << endl;
}

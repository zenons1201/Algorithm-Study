#include <iostream>
#define MAX 101
using namespace std;

bool square[MAX][MAX] = {false,};
int cnt = 0;
int main()
{
	for(int i = 0; i < 4; i++)
	{
		int Lx, Ly, Rx, Ry;
		cin >> Lx >> Ly >> Rx >> Ry;

		for(int lx = Lx; lx <= Rx - 1; lx++)
		{
			for(int ly = Ly; ly <= Ry - 1; ly++)
			{
				square[ly][lx] = true;
			}
		}
	}
	
	for(int i = 0; i < MAX; i++)
	{
		for(int j = 0; j < MAX; j++)
		{
			if(square[i][j])
			{
				cnt++;
			}
		}
	}
	
	cout << cnt << endl;
}

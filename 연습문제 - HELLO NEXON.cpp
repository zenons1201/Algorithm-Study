#include <iostream>
#include <string.h>
using namespace std;

int main()
{
	int N, M;
	int ans = 0;
	cin >> N >> M;
	string arr[50][50];
	string nexon = "NEXON";
	for(int i = 0; i < M; i++)
	{
		for(int j = 0; j < N; j++)
		{
			cin >>  arr[i][j];
		}
	}
	
	for(int i = 0 ; i <  M; i++)
	{
		for(int j = 0; j < N; j++)
		{
			if(arr[i][j] == nexon)
			{
				ans++;
			}
		}
	}
	
	cout << ans << endl;
}

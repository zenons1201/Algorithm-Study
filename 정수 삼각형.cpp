#include <iostream>
using namespace std;

int main()
{
	int Triangle[100][100];
	int N;
	
	cin >> N;
	
	for(int i = 0; i < N; i++)
	{
		for(int j = 0; j <= i; j++)
		{
			cin >> Triangle[i][j];
		}
	}
	
	for(int i = N-1; i >= 0; i--)
	{
		for(int j = 0; j <= N; j++)
		{
			Triangle[i][j] += max(Triangle[i+1][j], Triangle[i+1][j+1]);
		}
	}
	
	cout << Triangle[0][0] << endl;
}

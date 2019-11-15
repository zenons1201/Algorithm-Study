#include <iostream>
using namespace std;

int main()
{
	int N;
	cin >> N;
	int Price[N+1];
	int D[N+1];
	
	for(int i = 1; i <= N ; i++)
	{
		cin >> Price[i];
	}
	D[0] = 0;
	D[1] = Price[1];
	int max;
	for(int i = 2; i <= N; i++)
	{
		max = Price[i];
		for(int j = 1; j <= i / 2; j++)
		{
			if(D[i - j] + D[j] > max)
			{
				max = D[i - j] + D[j];
			}
		}
		D[i] = max;
	}
	cout << D[N];
}


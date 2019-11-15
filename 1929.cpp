#include <iostream>
#include <cmath>
#include <string>
using namespace std;

bool isPrime(int n)
{
	if(n == 1)
	{
		return false;
	}
	
	if(n == 2)
	{
		return true;
	}
	
	for(int i = 2; i <= sqrt(n); i++)
	{
		for(int j = i * i; j <= n; j++)
		{
			if(n % j == 0)
			{
				return false;
			}
		}
	}
	return true;
}
int main()
{
	int M, N;
	cin >> M >> N;
	for(int i = M; i <= N; i++)
	{
		if(isPrime(i))
		{
			cout << i << endl;
		}
	}

}

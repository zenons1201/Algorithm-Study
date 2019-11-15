#include <iostream>
#include <cstring>
#include <vector>
#include <algorithm>
using namespace std;
string arr[1000001] = {"Messi", "Gimossi"};

void Fibonacci(int N)
{
	if(N == 1)
	{
		cout << arr[0] << endl;
	}
	
	else if(N == 2)
	{
		cout << arr[1] << endl;
	}
	
	else
	{
		for(int i = 3; i <= N; i++)
		{
			arr[N] = arr[N-1] + ' ' + arr[N-2];
		}
	}
}

int main()
{
	int N;
	cin >> N;
	Fibonacci(N);
	string str = arr[N];
	cout << arr[0] << endl;
	cout << str[N] << endl;
}

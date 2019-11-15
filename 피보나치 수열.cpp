#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	static long long Fibo[10001];
	
	Fibo[0] = 0;
	Fibo[1] = 1;
	Fibo[2] = 1; 
	for(int i = 3; i <= n; i++)
	{
		Fibo[i] = Fibo[i-1] + Fibo[i-2];
	}
	
	cout << Fibo[n] << endl;
}

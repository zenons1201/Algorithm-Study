#include <iostream>
using namespace std;

int Result(int n)
{
	int sum = n;
	while(1)
	{
		if(n == 0)
		{
			break;
		}
		int a = n % 10;
		sum += a;
		n /= 10;
	}
	return sum;
}
int main()
{
	bool flag;
	int N;
	int res = 0;
	cin >> N;
	
	for(int i = 1; i <= 1000000; i++)
	{
		if(Result(i) == N)
		{
			flag = true;
			res = i;
			break;
		}
	}
	
	if(flag)
	{
		cout << res << endl;
	}
	
	else
	{
		cout << 0 << endl;
	}
}

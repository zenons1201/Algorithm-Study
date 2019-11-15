#include <iostream>

using namespace std;

int cnt = 0;
int Cycle(int n)
{
	int ten = n / 10;
	int one = n % 10;
	int value = ten + one;
	int res = one * 10 + value % 10;
	return res;
}

int main()
{
	int n;
	cin >> n;
	int init = n;
	
	while(1)
	{
		cnt++;
		n = Cycle(n);
		if(init == n)
		{
			break;
		}
	}
	cout << cnt << endl;
}

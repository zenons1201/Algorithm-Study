#include <iostream>

using namespace std;

bool check[10000];
void Make_SelfNum(int n)
{
	if(n > 10000)
	{
		return;
	}
	
	int sum = n;
	while(n > 0)
	{
		int digit = n % 10;
		sum += digit;
		n /= 10;
	}
	check[sum] = true;
	Make_SelfNum(sum);
}

int main()
{
	for(int i = 1; i <= 10000; i++)
	{
		Make_SelfNum(i);
	}
	
	for(int i = 1; i <= 10000; i++)
	{
		if(!check[i])
		{
			cout << i << endl;
		}
	}
}

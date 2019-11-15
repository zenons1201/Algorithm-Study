#include <iostream>

using namespace std;

int main()
{
	int cnt = 0;
	int a, b, v;
	int sum = 0;
	cin >> a >> b >> v;
	
	while(sum < v)
	{			
     	cnt++;	
		sum += a;
		if(sum >= v)
		{
			break;
		}
		
		else
		{
			sum -= b;
		}
	}
	cout << cnt << endl;
}

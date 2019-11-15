#include <iostream>
#include <map>
#include <cstring>
using namespace std;

map <string, int> arr;
int main()
{
	int N, P;
	int W, L, G;
	cin  >> N >> P;
	cin >> W >> L >> G;
	int sum = 0;
	int value;
	bool flag = false;
	
	for(int i = 0; i < P; i++)
	{
		string name;
		char WL;
		cin >> name >> WL;
		if(WL == 'W')
		{
			arr[name] = W;
		}
	}
	
	for(int i = 0; i < N; i++)
	{
		string names;
		cin >> names;
		
		value = arr[names];
		
		if(value == W)
		{
			sum += W;
			if(sum >= G)
			{
				flag = true;
			}
		}
		
		
		else
		{
			sum -= L;
				
			if(sum <= 0)
			{
				sum = 0;
			}
		}
		value = 0;
	}
	
	if(flag)
	{
		cout << "I AM NOT IRONMAN!!";
	}
	
	else
	{
		cout << "I AM IRONMAN!!";
	}
	
}

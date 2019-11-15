#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> v;
	
	int X, N;
	cin >> N >> X;
	
	for(int i = 1; i <= N; i++)
	{
		int a;
		cin >> a;
		
		if(a < X)
		{
			v.push_back(a);
		}
		
		else
		{
			continue;
		}
	}
	
	for(auto &b : v)
	{
		cout << b << " ";
	}
}

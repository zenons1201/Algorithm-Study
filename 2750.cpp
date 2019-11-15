#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	vector<int> v;
	int N;
	cin >> N;
	
	for(int i = 0; i < N; i++)
	{
		int a;
		cin >> a;
		v.push_back(a);
	}
	
	sort(v.begin(), v.end());
	
	for(auto a : v)
	{
		cout << a << endl;
	}
}

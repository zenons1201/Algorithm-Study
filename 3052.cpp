#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	vector<int> v;
	for(int i = 0; i < 10; i++)
	{
		int a;
		cin >> a;
		v.push_back(a % 42);
	}
	
	sort(v.begin(), v.end());
	v.erase(unique(v.begin(), v.end()), v.end());
	
	cout << v.size() << endl;
}

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int N;
	scanf("%d", &N);
	vector<int> v;
	for(int i = 1; i <= N; i++)
	{
		int b;
		cin >> b;
		v.push_back(b);
	}
	sort(v.begin(), v.end());
	
	for(int i = 0; i < v.size(); i++)
	{
		printf("%d", v[i]);
	}
}

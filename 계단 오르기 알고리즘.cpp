#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	int n;
	int stair[301];
	int sum[301];
	
	cin >> n;
	for(int i = 1; i <= n; i++)
	{
		cin >> start[i];
	}
	
	sum[0] = 0;
	sum[1] = stair[1];
	sum[2] = stair[1] + stair[2];
	
	for(int i = 3; i <= n; i++)
	{
		sum[i] = max(stair[i] + stair[i-1] + sum[i-3], stair[i] + sum[i-2]);
	}
	cout << sum[i] << endl;
}

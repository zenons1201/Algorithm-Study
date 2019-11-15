#include <iostream>

int n, capacity;
int volume[100], need[100];
int cache[1001][100];

using namespace std;

int BackPack(int capacity, int item)
{
	if(item == n)
	{
		return 0;
	}
	
	int& ret = cache[capacity][item];
	
	ret = BackPack(capacity, item + 1);
	if(capacity - volume[item] >= 0)
	{
		ret = max(ret, BackPack(capacity - volume[item], item + 1) + need[item]);
	}
	
	return ret;
}

int main()
{
	cin >> n >> capacity;
	for(int i = 0; i < n; i++)
	{
		cin >> volume[i] >> need[i];
	}
	
	int ans = BackPack(capacity, 0);
	cout << ans << endl;
}

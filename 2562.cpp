#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int arr[9];
	int ans = 0;
	vector<int> v;
	for(int i = 0; i < 9; i++)
	{
		cin >> arr[i];
		v.push_back(arr[i]);
	}
	
	sort(v.begin(), v.end());
	int max_num = v[8];
	for(int i = 0; i < 9; i++)
	{
		if(arr[i] == max_num)
		{
			ans = i + 1;
			break;
		}
	}
	cout << max_num << endl;
	cout << ans << endl;
}

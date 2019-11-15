#include <iostream>

using namespace std;

int main()
{
	int S[100];
	int DP[100];
	int n;
	cin >> n;
	
	for(int i = 0; i < n; i++)
	{
		cin >> S[i];
	}
	
	DP[0] = S[0];
	
	for(int i = 1; i < n; i++)
	{
		DP[i] = max(S[i], S[i] + DP[i-1]);
	}
	
	int max_sum = 0;
	
	for(int i = 0; i < n; i++)
	{
		if(max_sum < DP[i])
		{
			max_sum = DP[i];
		}
	}
	
	cout << max_sum << endl;
}

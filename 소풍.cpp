#include <iostream>

using namespace std;

bool areFriends[10][10];
int n, m;
int CountPairing(bool taken[10])
{
	int first = -1;
	for(int i = 0; i < n; i++)
	{
		if(!taken[i])
		{
			first = i;
			break;
		}
	}
	
	if(first == -1) return 1;
	
	int ret = 0;
	
	for(int i = first + 1; i < n; i++)
	{
		if(!taken[i] &&  areFriends[first][i])
		{
			taken[i] = taken[first] = true;
			ret += CountPairing(taken);
			taken[i] = taken[first] = false;
		}
	}
	return ret;
}
int main()
{
	cin >> n >> m;
	bool taken[10] = {false,};
	for(int i = 0; i < m; i++)
	{
		int a, b;
		cin >> a >> b;
		areFriends[a][b] = areFriends[b][a] =  true;
	}
	
	cout << CountPairing(taken) << endl;
}

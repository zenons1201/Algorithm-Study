#include <iostream>
#include <queue>
using namespace std;

bool visited[100001] = {false,};
queue <pair<int,int>> q;
int ans = 0;

int main()
{
	int N, K;
	cin >> N >> K;
	
	q.push(make_pair(N, 0));
	visited[N] = true;
	
	while(!q.empty())
	{
		int x = q.front().first;
		int y = q.front().second;
		q.pop();
		
		if(x == K)
		{
			ans = q.front().second;
			break;
		}
		
		if(x + 1 < 100001 && !visited[x+1])
		{
			q.push(make_pair(x+1, y+1));
			visited[x+1] = true;
		}
		
		if(x - 1 >= 0 && !visited[x-1])
		{
			q.push(make_pair(x-1, y+1));
			visited[x-1] = true;
		}
		
		if(x * 2 < 100001 && !visited[x*2])
		{
			q.push(make_pair(x*2, y+1));
			visited[x*2] = true;
		}
	}
	
	cout << ans << endl;
}

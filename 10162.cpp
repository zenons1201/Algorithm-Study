#include <iostream>
#include <queue>
using namespace std;

int main()
{
	queue<pair<int, pair<int, pair<int, int>>>> q;
	int a, b, c = 0;
	int A = 300;
	int B = 60;
	int C = 10;
	bool visit[10001];
	int T;
	cin >> T;
	q.push({T, {0, {0, 0}}});
	visit[T] = true;
	
	while(!q.empty())
	{
	    int n = q.front().first;
	    int a = q.front().second.first;
	    int b = q.front().second.second.first;
	    int c = q.front().second.second.second;
		q.pop();
		
		if(n == 0)
		{
			cout << a  << " " << b << " " << c;
			return 0;
		}
		
		if(n - A >= 0 && !visit[n-A])
		{
			visit[n - A] = true;
			q.push({n-A, {a+1, {b, c}}});		
		}
		
		if(n - B >= 0 && !visit[n - B])
		{
			visit[n - B] = true;
			q.push({n-B, {a, {b+1, c}}});	
		}
		
		if(n - C >= 0 && !visit[n - C])
		{
			visit[n - C] = true;
			q.push({n-C, {a, {b, c+1}}});
		}
	}

	cout << -1 << endl;
	return 0;
}

#include <iostream>
#include <vector>
using namespace std;

int N, M;
int result;
vector<int> v; 
void Choice_Card(int idx, int cnt, int sum)
{
	if(cnt == M && sum <= M)
	{
		result = max(result, sum);
		return;
	}
	
	if(idx >= N || cnt > 3 || sum > M)
	{
		return;
	}
	
	Choice_Card(idx + 1, cnt + 1, sum + v[idx]);
	Choice_Card(idx + 1, cnt, sum);
}

int main()
{
	cin >> N >> M;
	for(int i = 0; i < M; i++)
	{
		cin >> v[i];
	}
	Choice_Card(0, 0, 0);
	cout << result << endl;
	return 0;
}

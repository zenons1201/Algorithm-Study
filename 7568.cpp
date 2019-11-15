#include <iostream>
#include <vector>
using namespace std;

vector<pair<pair<int, int>, int>> p;

int main()
{
	int N; 
	cin >> N;
	
	for(int i = 0; i < N; i++)
	{
		int x, y;
		cin >> x >> y;
     	p.push_back({{x, y}, 1});
	}
	
	for(int i = 0; i < N; i++)
	{
		for(int j = 0; j < N; j++)
		{
			if(i == j)
			{
				continue;
			}
			
			if(p[i].first.first < p[j].first.first && p[i].first.second < p[j].first.second)
			{
				p[i].second++;
			}
		}
	}
	
	for(int i = 0; i < N; i++)
	{
		cout << p[i].second << " ";
	}
}

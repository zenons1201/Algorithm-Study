#include <iostream>
using namespace std;

int N, M;
int Pos[100001];
int weight[100001];


int main()
{
	cin >> N;
	cin >> M;
	int b = -1;
	int c, h;
	for(int i = 0; i < M; i++)
	{
		cin >> c;
		if(b == -1)
		{
			b = c;
			h = c;
		}
		
		else
		{
			h = max(h, (c - b + 1) / 2);
			b = c;
		}
	}
	
	h = MAX(h, N - c);

	cout << h << endl;
}

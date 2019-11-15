#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <cstring>
#include <utility>
using namespace std;

int main()
{
	int sum_x = 0;
	int sum_y = 0;
	int N;
	
	cin >> N;
	
	for(int i = 0; i < N; i++)
	{
		int x, y;
		cin >> x >> y;
		sum_x += x;
		sum_y += y;
	}
	cout << (double)sum_x / N << " " << (double)sum_y / N << endl;
}


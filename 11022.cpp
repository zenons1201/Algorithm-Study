#include <iostream>
using namespace std;

int main()
{
	int N;
	cin >> N;
	for(int i = 1; i <= N; i++)
	{
		int a, b;
		cin >> a >> b;
		printf("Case #%d: %d + %d = %d \n", i, a, b, a+b);
	}
}

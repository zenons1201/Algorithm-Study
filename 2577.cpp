#include <iostream>
using namespace std;

int main()
{
	int A, B, C;
	int res = 0;
	int arr[10] = {0,};
	cin >> A >> B >> C;
	res = A * B * C;

	while(res != 0)
	{
		int a = res % 10;
	    arr[a]++;
		res /= 10;

	}

	for(int i = 0; i <= 9; i++)
	{
		cout << arr[i] << endl;
	}
}

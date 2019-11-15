#include <iostream>
#include <algorithm>
#include <vector>
#include <functional>

using namespace std;


void Compare(int A[], int B[])
{
	for(int i = 4; i >= 1; i--)
	{
		if(A[i] > B[i])
		{
			cout << "A" << endl;
			break;
		}
		
		else if(A[i] < B[i])
		{
			cout << "B" << endl;
			break;
		}
		
		else
		{
			continue;
		}
	}
}

int main()
{
	int N;
	cin >> N;
	while(N--)
	{
		int A[101], B[101];
		int an;
		cin >> an;
		for(int j = 1; j <= an; j++)
		{
			int a;
			cin >> a;
			A[a]++;
		}
		
		int bn ;
		cin >> bn;
		for(int k = 1; k <= bn; k++)
		{
			int b;
			cin >> b;
			B[b]++;
		}
		
		Compare(A, B);
	}
}

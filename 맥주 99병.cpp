#include<cstdlib>
#include<cstdio>

using namespace std;
int n;

void Beer(int N)
{
	if (N > 2)
	{
		printf("%d bottles of beer on the wall, %d bottles of beer.\n", N, N);
		printf("Take one down and pass it around, %d bottles of beer on the wall. \n", N - 1);
		printf("\n");
	}

	else if (N == 2)
	{
		printf("%d bottles of beer on the wall, %d bottles of beer.\n", N, N);
		printf("Take one down and pass it around, %d bottle of beer on the wall. \n", N - 1);
		printf("\n");
	}

	else if(N == 1)
	{
		printf("%d bottle of beer on the wall, %d bottle of beer.\n", N, N);
		printf("Take one down and pass it around, no more bottles of beer on the wall. \n");
		printf("\n");
	}

	else if(N <= 0)
	{
		printf("No more bottles of beer on the wall, no more bottles of beer.\n");
		printf("Go to the store and buy some more, %d bottles of beer on the wall.\n", n);
		printf("\n");
		return;
	}
}

int main()
{
	scanf("%d", &n);

	for (int i = n; i >= 0; i--)
	{
		Beer(i);
	}
}






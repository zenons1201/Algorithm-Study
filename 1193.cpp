#include <iostream>

using namespace std;



int main(void)

{

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int k;
	int sum = 1;
	long long cnt = 0;
	int num = 1;

	cin >> k;

	if (k == 1)

	{

		cout << 1 << "/" << 1 << "\n";

		return 0;

	}

	while (1)
	{
		sum++;

		cnt += num;

		if (cnt >= k)
			break;

		num++;
	}



	int a = 1, b = 1;

	if (sum % 2)

		a = sum - 1;

	else

		b = sum - 1;



	while (1)
	{

		if (cnt == k)

			break;



		if (sum % 2)
		{

			a--;
			b++;

		}

		else

		{

			a++;

			b--;

		}
		cnt--;
	}

	cout << a << "/" << b << "\n";

	return 0;

}



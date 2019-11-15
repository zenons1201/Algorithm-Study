#include <iostream>
#include <cmath>
using namespace std;

int Acard[5][16] = { {1,3,5,7,9,11,13,15,17,19,21,23,25,27,29,31},
{2,3,6,7,10,11,14,15,18,19,22,23,26,27,30,31},
{4,5,6,7,12,13,14,15,20,21,22,23,28,29,30,31},
{8,9,10,11,12,13,14,15,24,25,26,27,28,29,30,31},
{16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31}
};

int a[5];
int cnt = 0;
int res = 0;

int main()
{
	string yes;
	string ans;
	cout << "1부터 31까지의 수 중 하나를 생각 하세요. 하셨다면 yes를 입력하세요." << endl;
	cin >> yes;
	if (yes == "yes")
	{
		for (int i = 0; i < 5; i++)
		{
			cout << "다음 나열된 수 중 생각한 숫자가 있나요?  yes / no" << endl;
			for (int j = 0; j < 16; j++)
			{
				printf("%3d", Acard[i][j]);
			}
			printf("\n");
			cin >> ans;

			if (ans == "yes")
			{
				a[cnt] = 1;
			}

			else
			{
				a[cnt] = 0;
			}

			cnt++;
		}


		for (int i = 0; i < 5; i++)
		{
			res += a[i] * pow(2, i);
		}

		cout << "당신이 생각한 수는 " << res << "입니다." << endl;
	}
	
	else
	{
		cout << "다음에 다시 시도해주세요." << endl;
	}
}

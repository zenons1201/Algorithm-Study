#include <iostream>

#include <vector>

#include <algorithm>

using namespace std;

 

const int MAX = 100000;

 

int N, M;

vector<int> A;

 

int binarySearch(int low, int high, int target)

{

        //���� ���: low�� high���� ũ�� ���� ��

        if (low > high)

                 return 0;

        else

        {

                 int mid = (low + high) / 2;

                 //�ش� ������ target�� �ִٸ� ã�����Ƿ� 1 ��ȯ

                 if (A[mid] == target)

                         return 1;

                 //�ش� ������ �ִ� ���� target���� ũ�� ���� �� Ž��

                 else if (A[mid] > target)

                         return binarySearch(low, mid - 1, target);

                 //�ش� ������ �ִ� ���� target���� ������ ������ �� Ž��

                 else

                         return binarySearch(mid + 1, high, target);

        }

}

 

int main(void)

{

        ios_base::sync_with_stdio(0);

        cin.tie(0); //cin �ӵ� ��� ����

        cin >> N;

 

        for (int i = 0; i < N; i++)

        {

                 int num;

                 cin >> num;

                 A.push_back(num);

        }

        sort(A.begin(), A.end()); //�̺�Ž���� ���ĵǾ� �־���Ѵ�.

 

        cin >> M;

        for (int i = 0; i < M; i++)

        {

                 int num;

                 cin >> num;

                 cout << binarySearch(0, N - 1, num) << "\n"; //endl ���� �ð� �ʰ�

        }

        return 0;

}

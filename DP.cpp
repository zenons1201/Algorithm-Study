#include <iostream>
using namespace std;

int n;
int arr[500][500];
int main()
{
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j <= i; j++)
        {
            cin >> arr[i][j];
        }
    }
    
    for(int i = n-1; i >= 0; i--)
    {
        for(int j = 0; j < n; j++)
        {
            arr[i][j] += max(arr[i+1][j], arr[i+1][j+1]);
        }
    }
    
    cout << arr[0][0] << endl;
}


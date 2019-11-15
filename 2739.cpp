#include <iostream>

using namespace std;

int main()
{
	int N;
	cin >> N;
	
	if(N >= 90 && N <= 100)
	{
		cout << "A" << endl;
	}
	
	else if(N >= 80 && N < 90)
	{
		cout << "B" << endl;
	}
	
	else if(N >= 70 && N < 80)
	{
		cout << "C" << endl;
	} 
	 
    else if(N >= 60 && N < 70)
    {
    	cout << "D" << endl;
	}
	
	else
	{
		cout << "F" << endl;
	}
}

#include <iostream>
#include <cstring>
using namespace std;

int dial(char ch)
{
	if(ch == 'A' || ch == 'B' || ch == 'C')
	{
		return 3;
	}
	
	else if(ch == 'D' || ch == 'E' || ch == 'F')
	{
		return 4;
	}
	
	else if(ch == 'G' || ch == 'H' || ch == 'I')
	{
		return 5;
	}
	
	else if(ch == 'J' || ch == 'K' || ch == 'L')
	{
		return 6;
	}
	
	else if(ch == 'M' || ch == 'N' || ch == 'O')
	{
		return 7;
	}
	
	else if(ch == 'P' || ch == 'Q' || ch == 'R' || ch == 'S')
	{
		return 8;
	}
	
	else if(ch == 'T' || ch == 'U' || ch == 'V')
	{
		return 9; 
	}
	
	else if(ch == 'W' || ch == 'X' || ch == 'Y' || ch== 'Z')
	{
		return 10;
	}
	
	
}

int main()
{
	int sum = 0;
	string str;
	cin >> str;
	
	
	for(int i = 0; i < str.size(); i++)
	{
		char ch = str[i];
		sum += dial(ch);
	}
	
	cout << sum << endl;
}

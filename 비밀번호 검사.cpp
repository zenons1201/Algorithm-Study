#include <iostream>
#include <cstring>
#include <cctype>
#include <algorithm>
using namespace std;

bool Check_Length(string str)
{
	if(str.size() >= 8 && str.size() <= 15)
	{
		return true;
	}
	return false;
}

bool Check_Alphabet(string str)
{
	for(int i = 0; i < str.size(); i++)
	{
		if(str[i] >= 97 && str[i] <= 122)
		{
			return true;
		}
	}
	return false;
}

bool Check_Alphabet_2(string str)
{
	for(int i = 0; i < str.size(); i++)
	{
		if(str[i] >= 65 && str[i] <= 90)
		{
			return true;
		}
	}
	return false;
}

bool Check_Special(string str)
{
	for(int i = 0; i < str.size(); i++)
	{
		if((str[i] >= 33  && str[i] <= 47) || (str[i] >= 60 && str[i] <= 64) || (str[i] >= 91 && str[i] <= 96) || (str[i] >= 123 && str[i] <= 126))
		{
			return true;
		}
	}
	return false;
}

bool Check_Number(string str)
{
	for(int i = 0; i < str.size(); i++)
	{
		if(str[i] >= 48 && str[i] <= 57)
		{
			return true;
		}
	}
	return false;
}


int main()
{
	bool flag = false;
	string str;
	cin >> str;
	if(Check_Length(str) && Check_Alphabet(str) && Check_Alphabet_2(str) && Check_Number(str) && Check_Special(str))
	{
		flag = true; 
	}
	
	if(flag)
	{
		cout << "valid" << endl;
	}
	
	else
	{
		cout << "invalid" << endl;
	}
}

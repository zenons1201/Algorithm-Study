#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

bool Check_Length(string str)
{
	if(str.size() >= 2 && str.size() <= 200)
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
		if(str[i] == '.'  || str[i] == '-') 
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

bool Check(string str)
{
	for(int i = 0; i < str.size(); i++)
	{
		if(str[i] == '@')
		{
			return true;
		}
	}
	return false;
}

int main()
{
	int N;
	cin >> N;
	for(int i = 0; i < N; i++)
	{
		bool flag = false;
	    string str;
	    cin >> str;
	    
	    if(Check(str) && Check_Length(str))
	    {
	   	    if(Check_Alphabet(str))
	        {    
		         flag = true; 
            }
        }

	
    	if(flag)
	    {
		    cout << "Yes" << endl;
	    }
	
    	else
    	{
	    	cout << "No" << endl;
	    }
    }
}

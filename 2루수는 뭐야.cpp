#include <iostream>
#include <cctype>
#include <string>
#include <algorithm>
using namespace std;

bool flag;
string anj = "anj";
int main()
{
	int N;
	cin >> N;
	
	for(int i = 0; i < N; i++)
	{
		int ans = 0;
		string str;
		cin >> str;
		
		if(str == anj)
	    {
		   flag = true;
	    } 
		transform(str.begin(), str.end(), str.begin(), ::tolower);
	    if(str == anj)
	    {
		   flag = true;
	    } 
	    
	}

	
	if(flag)
	{
		cout << "构具;";
	}
	
	else
	{
		cout << "构具?";
	}
}

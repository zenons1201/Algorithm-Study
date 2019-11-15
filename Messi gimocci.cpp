#include <bits/stdc++.h>
using namespace std;
int n, m;
int f[44] = { 0,5,13 };
string s = "Messi Gimossi";
int main() {
	cin >> m; 
	m--;
	
	for (int i = 3; i <= 40; i++)
    {
		f[i] = f[i-1]+f[i-2]+1;  
	}
	

	if (m == 5 || m == -1) cout << "Messi Messi Gimossi";
	else cout << s[m];
	return 0;
}

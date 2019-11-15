#include <iostream>
using namespace std;

int main()
{
	int P, Q, W;
	int t;
	cin >> P >> Q >> W;
	int ans1, ans2;
	
		int a, b, c;
		
		if(P > Q)
		{
	    	t = W / P;
     	}
     	
     	else
     	{
     		t = W / Q;
		}
     	
		for(int i = 1; i < t; i++)
		{
			a = W - (P * i);
			b = a / Q;
			c = a % Q;
			
			if(c == 0)
			{
			   ans1 = i;
			   ans2 = b;
		       break;
		    }
		}
	cout << ans1 << " " << ans2 << endl;
}

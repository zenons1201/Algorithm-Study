#include <iostream>

using namespace std;

int main()
{
	int ans = 0;
	bool flag;
	int N;
	cin >> N;
	int material[101];
	int Steak[101];
	int sum_mat = 0;
	int sum_ste = 0;
	
	for(int i = 1; i <= N; i++)
	{
		cin >> material[i];
	}
	
	for(int i = 1; i <= N; i++)
	{
		cin >> Steak[i];
		sum_ste += Steak[i];
	}
	
	if(sum_ste == 0)
	{	
	    cout << ans << endl;
    }
    
    else
    {
     	while(1)
	    {
	    	for(int i = 1; i <= N; i++)
	    	{		
	    		if(material[i] < Steak[i])
		    	{
		    		flag = true;
	    			break;
	    		}
			
		    	else
	    		{
		        	material[i] -= Steak[i];
		        }
	    	}

	    	if(flag)
	    	{
	    		break;
		    }
		
	    	else
	    	{
	    		ans++;
	    	}
    	}
    	cout << ans  << endl;
	}
    
	return 0;
}

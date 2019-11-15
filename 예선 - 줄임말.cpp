#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n;
    freopen("input_test.txt","r",stdin);
    freopen("output_test.txt","w",stdout);
    scanf("%d\n",&n);
    char str[3000];
    while(n--)
    {
        bool pr=true;
        fgets(str,sizeof(str),stdin);
        int len=strlen(str);
        for(int i=0; i<len; i++)
        {
            if(str[i]==' ')
            {
                pr=true;
                continue;
            }
            if(!pr) continue;
            if(('A'<=str[i] && str[i]<='Z') || ('a'<=str[i] && str[i]<='z'))
                printf("%c",str[i]);
            else
            {
                printf("%c%c",str[i],str[i+1]);
                i++;
            }
 
            pr=false;
        }
        printf("\n");
    }
    return 0;
}

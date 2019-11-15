#include <stdio.h>

int main()
{
   int e=0;
   int n=0;
   int i=1;
   int j=0;
   int p=0;
   int s=1;
   int arr[50][50]={0};
   int k;
   int a=0; //입력받은 숫자
   scanf("%d %d",&a, &k);
   e=a;
   while(a>0)
   {
      for (p=1;p<=a;p++)
      {
         n=n+1;
         j=j+s;
         arr[i][j]=n;
      }
      a=a-1;
 
      if(a>0)
      {
         for(p=1;p<=a;p++)
         {
            n=n+1;
            i=i+s;
            arr[i][j]=n;
         }
      }
      s=s*(-1);
   }
 
 
   
         for(i=1; i<=e; i++)
         {
            for(j=1; j<=e; j++)
            {
               if(arr[i][j] == k)
               {
               	 printf("%d %d", j, i);
			   }
            }
         }
         return 0;
}

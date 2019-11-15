#include <cstdio>
 
int n,i,j,k,cnt,d[52][52];
char a[3000][2];
int ctoi(char c) { return c>='A' && c<='Z'?c-'A':c-'a'+26; }
char itoc(int n) { return n<26?'A'+n:'a'+n-26; }
 
int main()
{
    for(i=0;i<52;i++) d[i][i]=1;
    scanf("%d",&n);
    while(n--)
    {
        char p,q;
        scanf(" %c => %c",&p,&q);
        d[ctoi(p)][ctoi(q)]=1;
    }
    for(k=0;k<52;k++) for(i=0;i<52;i++) for(j=0;j<52;j++)
        d[i][j]|=d[i][k]&d[k][j];
    for(i=0;i<52;i++) for(j=0;j<52;j++) if(d[i][j] && i!=j)
        a[cnt][0]=itoc(i),a[cnt][1]=itoc(j),cnt++;
    printf("%d\n",cnt);
    for(i=0;i<cnt;i++)
        printf("%c => %c\n",a[i][0],a[i][1]);
    return 0;
}


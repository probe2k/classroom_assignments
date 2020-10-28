#include<stdio.h>
void main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    { 
        int n,cc,mc,j;
        scanf("%d %d %d %d",&n,&j,&cc,&mc);
        int b[2*n],i,flag=0;    
       for(i=0;i<n;i++)
       { b[i]=b[n+i]=i; } 
       for(i=cc;i<(cc+n);i+=j)    
       { 
          if(b[i]==mc)
          { flag=1;
           break;}
         }
      if(flag==1)
       printf("YES\n");
     else
     printf("NO\n");   
    }

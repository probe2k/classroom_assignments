#include<stdio.h>  
void read_array( int x[], int n);
float MEAN ( int x[], int n); 
int main()                                            
{      
	int a[100],p;                                 
	float mean;
	printf(" Enter number of array elements\n");
        scanf("%d",&p);
       printf(" Enter array items\n");
       read_array(a,p);
  
       mean = MEAN(a,p);   
       printf(" Mean = %f", mean);                    
       return 0;                                       
}                                                      
 
void read_array ( int x[], int n)
 {
       int i;
         for ( i = 0; i < n; i++)                               scanf("%d", &x[i]);
 }

  float MEAN ( int x[], int n)
 {
        int i, sum = 0;
        for(i = 0; i < n; i++)                                  {
                sum = sum + x[i];
         }
 
     return sum/ (float)n;
 }

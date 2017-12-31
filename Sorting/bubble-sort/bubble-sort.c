
                         //Header Files Inclusion

#include<stdio.h>

   //Function used to perform bubble sorting

void bubble_sort(int A[],int n)
{
int i,j,temp;
 for(i=0;i<n;i++)
   {
    for(j=0;j<(n-i-1);j++)
       {
        if(A[j]>A[j+1])
          {
                temp=A[j];
                A[j]=A[j+1];
                A[j+1]=temp;      
          }

        }
   }
    
}
//Main-function of the program

int main()
{
int A[]={10,3,7,56,1};
int n=5;//Number of elements in array
printf("The array elements before sorting are:- \n");
for(int i=0;i<n;i+=1)
      {
printf("%d\t",A[i]);
      }
bubble_sort(A,n);
printf("\n");
printf("The array elements after bubble_sorting are:- \n");
for(int i=0;i<n;i+=1)
       {
printf("%d\t",A[i]);
        }
return 0;
}

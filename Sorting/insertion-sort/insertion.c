/*  Name:- Bakul Gupta
    E-mail:- bakulgupta11@gmail.com
 */

//Header files inclusion
#include<stdio.h>

//Insetion-sort function
void Insetionsort(int A[],int n)
{
	int i,j,key;
	for(i=1;i<n;i+=1)
	{
		key=A[i];
		j=i-1;
		 while ( j>=0  && key <A[j])
		 {
		 	A[j+1]=A[j];
		 	j--;
		 }
	A[j+1]=key;	 
	}
}
void Print(int A[],int n)
{
  for(int i=0;i<n;i+=1)
  {
  	printf("%d\t",A[i]);
  }
  printf("\n");
}
//Main-function

int main()
{
	int A[]={23,12,45,34,12,3,45,2,4,6};
	int n=sizeof(A)/sizeof(A[0]);
	printf("Before sorting the array elements are;- ");
	Print(A,n);
	Insetionsort(A,n);
	printf("After sorting the array elements are:- ");
	Print(A,n);
	return 0;
}
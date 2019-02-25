//Stdio ->Standard Input And Output
#include<stdio.h>

void A(int n)
{
 if(n>0)
 {
 	printf("%d\t",n-1);
 	A(n-1);
 }
}


int main()
{
	int n;
	printf("A Simple Program For Recursion To Print all the numbers from (n-1) to 0\n");
	printf("Enter the value of n:-");
	scanf("%d",&n);
	A(n);
return 0;
}
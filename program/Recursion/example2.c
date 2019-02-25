//Stdio ->Standard Input And Output
#include<stdio.h>

void A(int n)
{
 if(n>0)
 {
 	A(n-1);
 	printf("%d\t",n-1);
 }
}


int main()
{
	int n;
	printf("A Simple Program For Recursion To Print all the numbers from 0 to (n-1)\n");
	printf("Enter the value of n:-");
	scanf("%d",&n);
	A(n);
return 0;
}
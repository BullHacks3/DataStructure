//Program to find out rating of the course

#include<stdio.h>
#define n 10

int main()
{
	int i=1;
int rating[6]={0,0,0,0,0,0};
int m;
printf("The rating should lie between 0 and 5(integer only)\n");
while(i<=n)
{
	printf("Enter the rating given by %d student:-",i);
	scanf("%d",&m);
rating[m]++;
i++;
}
for(int k=1;k<6;k++)
{
	printf("The number of students that have given %d rating are :- %d\n",k,rating[k]);
}
return 0;
}
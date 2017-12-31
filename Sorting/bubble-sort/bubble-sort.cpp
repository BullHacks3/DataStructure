
//Headers file inclusion

#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b,c) for(i=a;i<b;i+=c)

//Bubble_sort function definition

void bubble_sort(int A[],int n)
{
   int i,j;
  rep(i,0,n,1)
          rep(j,0,(n-i-1),1)
                if(A[j]>A[j+1])
                     swap(A[j],A[j+1]);

}

//Main-function

int main()
{

ios_base::sync_with_stdio(false);
cin.tie(NULL);
int A[]={10,3,7,56,1};
int n=(sizeof(A)/sizeof(A[0]));
int i;
cout<<"The array elements before sorting are:- "<<"\n";
rep(i,0,n,1)
cout<<A[i]<<"\t";
bubble_sort(A,n);
cout<<"\n The array elements after sorting are:- "<<"\n";
rep(i,0,n,1)
cout<<A[i]<<"\t";
return 0;

}


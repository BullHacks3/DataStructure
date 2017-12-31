/* Name :- Bakul Gupta  */
#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b,c) for(i=a;i<b;i+=c)
class quicksort
{
	
public:
	    int q,pivot,k,j;
		void input(int A[],int n);
		void output(int A[],int n);
        void quick_sort(int A[],int p,int r)
	       {
	       	if (p<r)
	       	{
            q=Partition(A,p,r);
            quick_sort(A,p,q-1);
            quick_sort(A,q+1,r);
	       }
	       }
	    int Partition(int A[],int p,int r)
	       {
             pivot=A[r];
             k=p-1;
             rep(j,p,r,1)
             {
                if(A[j]<=pivot)
               	  {
                   k=k+1;
                   swap(A[k],A[j]);
               	  }  	  
	         }
	         swap(A[k+1],A[r]);
	       return (k+1); 
	       }
      
};
void quicksort::input(int A[],int n)
{
int i;
 rep(i,0,n,1)
      cin>>A[i];
cout<<endl;
}
void quicksort::output(int A[],int n)
{
 int i;
  rep(i,0,n,1)
   cout<<A[i]<<" ";
cout<<endl;
}
int main()
{
quicksort obj;
int n;
cout<<"Enter number of elements u want to enter:-";
cin>>n;
int A[n];
cout<<"Enter array elements :-"<<endl;
obj.input(A,n);
cout<<"The array elements before sorting are:-"<<endl;
obj.output(A,n);
//Quick_sort function calling 
obj.quick_sort(A,0,n-1);
cout<<endl;
cout<<"The array elements after sorting are:- "<<endl;
obj.output(A,n);
return 0;
}
#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b,c) for(i=a;i<b;i+=c)
#define repp(i,a,b,c) for(i=a;i>b;i+=c)
class Input_Output
{
	int i;
public:
	void input(int A[],int n)
	{
       rep(i,0,n,1)
      cin>>A[i];
      cout<<endl;
	}
	void output(int A[],int n)
	 {
	 	rep(i,0,n,1)
        cout<<A[i]<<" ";
        cout<<endl;
	 }
};
class Heap :public Input_Output
{
	int i;
public :
     int Max_Heapify(int A[],int i,int n);
     int Build_MaxHeap(int A[],int n);
     void Heap_sort(int A[],int n);
}h;
void Heap::Heap_sort(int A[],int n)
  {
        Build_MaxHeap(A,n);
       repp(i,n,-1,-1)
       {
       	   swap(A[0],A[i]);
       	   n--;
       	   Max_Heapify(A,0,n);
       }
  }
int Heap :: Build_MaxHeap(int A[],int n)
  {
   repp(i,n/2,-1,-1)
    {
    	Max_Heapify(A,i,n);
    }
  }
int Heap :: Max_Heapify(int A[],int i,int n)
{
     int l=2*i+1;
     int r=2*i+2;
     int largest=0;
     if(l<=n and A[l]>A[i])
     	 largest=l;
     else
         largest=i;
     if(r<=n and A[r]>A[largest])
         largest=r;
     if(largest!=i)
        {
        	swap(A[largest],A[i]);
        	Max_Heapify(A,largest,n);
        }     	
}  
int main()
{
int n;
cout<<"Enter number of elements u want to enter:-";
cin>>n;
int A[n];
cout<<"Enter array elements :-"<<endl;
h.input(A,n);
cout<<"The array elements before sorting are:-"<<endl;
h.output(A,n);
//Quick_sort function calling 
h.Heap_sort(A,n-1);
cout<<endl;
cout<<"The array elements after sorting are:- "<<endl;
h.output(A,n);
return 0;
}
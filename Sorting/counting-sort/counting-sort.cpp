#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b,c) for(i=a;i<b;i+=c)   //Macro declaration
#define repp(i,a,b,c) for(i=a;i>b;i+=c)  
class countingsort   //Class Declaration
{
int i; //Private Members of the class
public:
        void input(int A[],int n);
        void output(int A[],int n);
        void counting_sort(int A[],int n)
        {
        	int max=*max_element(A,A+n);
        	//cout<<"Value of max is:-"<<max<<endl;
        	int C[max+1]={0};
        	int B[n];
        	rep(i,0,n,1)
        	   C[A[i]]++;
        	rep(i,1,(max+1),1)
        	    C[i]+=C[i-1]; 
        	 repp(i,(n-1),-1,-1)
        	   {
        	   	B[C[A[i]]-1]=A[i];
        	   	C[A[i]]--;
        	   }   
        	   cout<<"Array elements after sorting are:-"<<endl;
         this->output(B,n);
        }



};
void countingsort::input(int A[],int n)
{
int i;
 rep(i,0,n,1)
      cin>>A[i];
cout<<endl;
}
void countingsort::output(int A[],int n)
{
 int i;
  rep(i,0,n,1)
   cout<<A[i]<<" ";
cout<<endl;
}
int main()
{
	countingsort obj;
int n;
cout<<"Enter number of elements u want to enter:-";
cin>>n;
int A[n];
cout<<"Enter array elements :-"<<endl;
obj.input(A,n);
cout<<"The array elements before sorting are:-"<<endl;
obj.output(A,n);
//Quick_sort function calling 
obj.counting_sort(A,n);
cout<<endl;
return 0;
}
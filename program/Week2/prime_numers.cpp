//Program in C++ To Find Out Prime Number
#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cout<<"Enter the value of n:- ";
cin>>n;
int t=0;
 for(int i=n;i>=2;i--)
  {
  	int flag=0;
  	int d=sqrt(i);
  	 if(i%2==0)
  	 {
  	 	flag=1;
  	 }
  	 else
  	 {
  	 for(int k=3;k<=d;k+=2)
  	 	 {
            if(i%k==0)
            {
            	flag=1;
            	break;
            }
            else
            {
            	flag=0;
            }
  	 	 }
    }
    if(flag==0)
    {t++;
    	cout<<i<<"\t";
    }
  }
  cout<<2<<"\t"<<endl;
cout<<"Total number of prime numbers from 2 to "<<n<< "is:- "<<t+1<<endl;
	return 0;
}
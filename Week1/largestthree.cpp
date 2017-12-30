//This C++ Program will find out the largest of three numbers //


#include<bits/stdc++.h>
using namespace std;
int main()
{
int A,B,C; //Define three integer type variables

//Used t print the statement on the screen
cout<<"Enter three numbers A,B,C :-"<<endl;

//Used to take input from the user
cin>>A>>B>>C;

//Make Use of Conditional Expressions
if (A>B)
   {
   	 if(A>C)
   	 	cout<<"The largest number is A:- "<<A<<endl;
   	 else
   	 	cout<<"The largest number is B:- "<<B<<endl;
   }
else
{
	if(B>C)
		cout<<"The largest number is B :- "<<B<<endl;
	else
		cout<<"The largest number is C:- "<<C<<endl;
}
return 0;
}

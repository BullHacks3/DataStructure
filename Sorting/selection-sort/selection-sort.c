//            C Program to Implement Selection Sort Algorithm


//Header Files Inclusion
 #include<stdio.h>
 

//Function to Implement Selection-Sort Algorithm
  void Selection_sort(int A[],int n)
   {
   int i,j,temp,k=0,min;
    for(i=0;i<n;i++)
        {
          min=A[i];
          k=i;
         for(j=(i+1);j< n;j+=1){
              if (min > A[j])
                  {
                  min=A[j];
                  k=j;
                  }
             }
        //Swap A[i] <--> A[k]
        temp=A[i];
        A[i]=A[k];
        A[k]=temp;
  }
}





//Main-function
  int main()
{
int A[]={54,2,3,78,54,1};
int n=6;
//Before Sorting
printf("Before sorting the array elements are:- ");
for(int i=0;i<n;i+=1)
   printf("%d\t",A[i]);
Selection_sort(A,n);
printf("\n");
printf("After sorting the array elements are:- ");
for(int i=0;i<n;i+=1)
   printf("%d\t",A[i]);
return 0;
}

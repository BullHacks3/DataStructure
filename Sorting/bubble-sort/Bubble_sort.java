class Bubblesort()
{

void Bubble_sort(int A[],int n)
 {
int i,j;
    for(i=0;i<n;i+=1)
        {
         for(j=0;j<(n-i-1);j+=1)
             {
              if(A[j]>A[j+1])
               {
                temp=A[j];
                A[j]=A[j+1];
                A[j+1]=temp;
              }
             }
        }

}

void Print(int A[],int n)
  {
  for(i=0;i<n;i+=1)
        System.out.print(A[i]);
  }





public static void main(String args[])
{
int A[]={10,3,7,56,1};
int n=5;
System.out.println("The array elements before sorting are:- ");
Print(A,n);
Bubble_sort(A,n)
System.out.println("The array elements after sorting are:-  ");
Print(A,n);

}

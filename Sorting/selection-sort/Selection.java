class Selection
{
	static void Selection_sort(int A[],int n)
	{
      int i,j,min,k,temp;
      for(i=0;i<n;i+=1)
      {
      	 k=i;
      	 min=A[i];
      	for(j=(i+1);j<n;j+=1)
      	{
           if(min>A[j])
           {
           	min=A[j];
           	k=j;
           }
        }   
        temp=A[i];
        A[i]=A[k];
        A[k]=temp;   
      	}
      }
	static void Print(int A[],int n)
	{
		int i;
		for(i=0;i<n;i+=1)
			System.out.print( A[i] + "\t");
	}
	public static void main(String args[])
	{
       int A[]={65,3,2,56,76,89};
       int n=6;
       System.out.println("Array elements before sorting are;- ");
       Print(A,n);
       Selection_sort(A,n);

       System.out.println("\nArray elements after sorting are :-");
       Print(A,n);
    }
}       
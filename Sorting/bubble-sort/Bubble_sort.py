z=input("Enter the array elements:- ")
print("The array elements before sorting are;- ",z)
def separator(z):
	k=z.split()
	final=[int(i) for i in k]
	w=len(final)
	for i in range(w):
		for j in range(0,(w-i-1)):
			if ( final[j] > final[j+1]):
				final[j],final[j+1]=final[j+1],final[j]
	print("The array elements after sorting are:-",end=" ")
	for i in range(w):
		print(final[i],end=" ")

separator(z)
		

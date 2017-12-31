z=input("Enter the arrays elements:- ")
print("The array elements before sorting are:- ",z)
print("\n")
def Selectionsort(z):
	k=z.split()
	lu=[int(i) for i in k]
	le=len(lu)
	for i in range(le):
		minn=lu[i]
		u=i
		for j in range(i+1,le):
			if(minn>lu[j]):
				minn=lu[j]
				u=j
		lu[i],lu[u]=lu[u],lu[i]
	print("After sorting the array elements are:- \n")
	for i in range(le):
		print(lu[i],end=" ")			

Selectionsort(z)
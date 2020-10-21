b=16
for mani in range(int(pow(b,1/2)),1,-1):
	if(b%mani==0):
		print(mani)
		print(int(b/mani))
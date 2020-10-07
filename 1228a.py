a,b=map(int,input().split())
f=0
for x in range(a,b+1):
	if(len(set(str(x)))>=len(str(x))):
		print(x)
		f=1
		break
if(f==0):
	print(-1)
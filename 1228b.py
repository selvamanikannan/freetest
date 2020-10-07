a,b=map(int,input().split())
l1=list(map(int,input().split()))
l1=list(filter((0).__ne__, l1))
l2=list(map(int,input().split()))
l2=list(filter((0).__ne__, l2))

if len(l1)==0 or len(l2) == 0:
	print(0)
else:
	ds1=1
	ds2=1
	for x in l1:
		ds1=ds1*x
	for x in l2:
		ds2=ds2*x
	print(a*b)
	print((ds1*ds2)%1000000007)
	# print(int(ds1/ds1))
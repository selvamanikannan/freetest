for _ in range(int(input())):
	lentu=int(input())
	lest=input().split()
	data=[]
	ok=[]
	for x in lest:
		a=int(x)
		ok[a%3]+=1
	# 	if(a%3==0):
	# 		ok.append(a)
	# 	else:
	# 		data.append(int(x))
	# data.sort()
	# m=len(data)
	# flag=0
	# for i in range(m):
	# 	# print(data[i])
	# 	try:
	# 		b=3-data[i]%3
	# 		if(b in data):
	# 			ok.append(data[i]+b)
	# 			data.remove(b)
	# 			data.remove(data[i])
	# 			m=len(data)
	# 	except:
	# 		if(sum(data)%3==0):
	# 			ok.append(sum(data))
	# 			break


	# print(len(ok))
	# for x in ok:
	# 	print(x,end=" ")
	# if(flag==0):
	# 	for x in data:
	# 		print(x,end=" ")

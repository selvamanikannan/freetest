n=int(input())
data=[4,8,15,16,23,42]
source={4:0,8:0,15:0,16:0,23:0,42:0}
inpu=[]
read_as=input().split()

for x in read_as:
	inpu.append(int(x))

bug=0
for x in inpu:
	if(x==4):
		source[4] += 1
	else:
		mm=data.index(x)-1
		# print(data[mm],x)
		if(source[data[mm]]<=source[x]):
			bug=bug+1
		else:
			source[x] += 1

mm=source[42]

for x in data:
	source[x]-=mm

print(sum(source.values())+bug)



# print(source,bug)
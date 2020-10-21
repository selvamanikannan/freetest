from itertools import product

def selvamani(a,b,num,temp):
	res = 0
	if temp%2==0:
		odd_value = int(temp/2) 
		even_value = temp= odd_value;
	else:
		even_value=int(temp/2)
		odd_value = temp-even_value

	for valuess in product(['e','o'],repeat = num):
		if valuess.count('o')%2==0:
			res+=(pow(even_value,valuess.count('e'))*pow(even_value,valuess.count('o')))
	print(res)

def main():
	a,b=map(int,input().split())
	num=int(input())
	selvamani(a,b,num,b-a+1)
main()
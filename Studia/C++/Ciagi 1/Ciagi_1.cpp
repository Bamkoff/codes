max1 = 0
max2 = 0

for i in input().split():
	if(int(i)>max1):
		max2=max1
		max1=int(i)

print(max2)
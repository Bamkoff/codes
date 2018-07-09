max = 0
min = 0
flaga = 0

for i in input().split():
	if flaga==0:
		min=int(i)
		flaga=1
	if int(i)>max: max=int(i)

	if int(i)<min and int(i)!=0: min=int(i)

if(min==0 and max==0): print(-1)
else: print(max-min)
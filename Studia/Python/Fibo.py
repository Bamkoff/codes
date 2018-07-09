x = int(input())
a = 1
b = 1
flaga = 0
if x==1:
    print('1=F(0)=F(1)')
else:	
    for i in range(2,45):
        if x<b and flaga==0:
            print('F('+str(i-2)+')<'+str(x)+'<F('+str(i-1)+')')
            flaga=1
        t = a
        a = b
        b = t+b
    if flaga==0:
        print(str(x)+'>F(45)')
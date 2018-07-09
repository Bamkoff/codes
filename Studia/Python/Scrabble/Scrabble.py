n = int(input())
for i in range(n):
	slowo = ''.join(sorted(input(), reverse = True))
	print(slowo)
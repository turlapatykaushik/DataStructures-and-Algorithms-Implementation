def fact(n):
	if(n==1):
		return 1
	else:
		return n*fact(n-1)
def prog():
	t = input()
	while(t):
		n = input()
		print fact(n)
		t-=1
prog()

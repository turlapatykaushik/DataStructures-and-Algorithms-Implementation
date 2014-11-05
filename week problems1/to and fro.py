def prog():
	n = input()
	while(n):
		s = raw_input()
		S=['a']*len(s)
		N = len(s)/n
		a=0
		x = len(s)
		while(x!=0):
			while(a<len(s) and x!=0):
				S[a]=s[len(s)-x]
				a+=N
				x-=1
			a-=N
			a+=1
			while(a>=0 and x!=0):
				S[a]=s[len(s)-x]
				a-=N
				x-=1
			a+=N
			a+=1
		print "".join(S)
		n = input()
prog()

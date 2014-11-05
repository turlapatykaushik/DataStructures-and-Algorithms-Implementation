def f():
	t = input()
	while(t):
	    inp = raw_input().split()
	    a = int(inp[0])
	    b = int(inp[1])
	    if(a&1!=b&1 or (a!=b and a!=b+2)):
	        print "No Number"
	    elif(a&1):
		print a+b-1
	    else:
		print a+b
	    t-=1
f()

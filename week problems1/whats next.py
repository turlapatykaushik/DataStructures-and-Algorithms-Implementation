def prog():
	while(1):
		inp = raw_input().split()
		a = int(inp[0])
		b = int(inp[1])
		c = int(inp[2])
		if (a or b or c) == False:
			return
		if(c-b==b-a):
			print "AP",c+(b-a)
		else:
			print "GP",c*(b/a)
prog()

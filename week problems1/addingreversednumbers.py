t = input()
while(t):
    inp = raw_input().split()
    a=inp[0][-1::-1]
    b=inp[1][-1::-1]
    c = str(int(a)+int(b))[-1::-1]
    print int(c)
    t-=1

try:
    t=int(input())
    for i in range(t):
    	b=int(input())
    	if(b<=2):
    		print(0)
    	else:
    		b=b-2
    		b=b//2
    		print(b*(b+1)//2)
except EOFError as e:
    print(end="")
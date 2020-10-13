def solve(s):
	s = list(s)
	h=10*int(s[0])+int(s[1])
	if(s[5] == 'a' and s[0] == '1' and s[1]=='2'):
		h=0
	elif(s[5] == 'p' and s[0] == '1' and s[1]=='2'):
		h=12
	elif(s[5] == 'a'):
		return ''.join(s[:-2])
	elif(s[5] == 'p'):
		h=h+12
	s[1]=str(h%10)
	s[0]=str(h//10)
	return ''.join(s[:-2])

s=input()
print(solve(s))
t=int(input())
s=set()
for _ in range(t):
	l = list(map(int, input().split()))
	for i in range(l[0], l[1]+1):
		s.add(i)
print(len(s))
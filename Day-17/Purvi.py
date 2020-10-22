t=int(input())
for _ in range(t):
    n = int(input())
    l = list(map(int, input().split()))
    me = max(l)+1
    maxi = len(l)-1
    mini=0
    s = ' '
    for i in range(len(l)):
        if (i%2==0):
            l[i]=l[i]+l[maxi]%me*me
            maxi-=1
        else:
            l[i]=l[i]+l[mini]%me*me
            mini+=1
    print(' '.join([str(elem//me) for elem in l]))

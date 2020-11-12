def kapNum(n):
    sq=str(n*n)
    li=[int(d) for d in str(sq)]
    lenn=int(len(str(sq))//2)
    r = (li[lenn:]) #4
    l = (li[:lenn]) #6
    resr = sum(d * 10**i for i, d in enumerate(r[::-1])) 
    resl = sum(d * 10**i for i, d in enumerate(l[::-1])) 
    if(resr+resl==n):
        return True
    return False
def kaprekarNumbers(p, q):
    f=0
    for i in range(p, q+1):
        if(kapNum(i)):
            f=1
            print(i, end=" ")
    if(f==0):
        print("INVALID RANGE")
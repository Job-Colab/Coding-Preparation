#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the kaprekarNumbers function below.
def kapNum(n):
    sq=str(n*n)
    li=[int(d) for d in str(sq)]
    lenn=int(len(str(sq))/2)
    r = (li[:lenn]) #4
    l = (li[lenn:]) #6
    resr = sum(d * 10**i for i, d in enumerate(r[::-1])) 
    resl = sum(d * 10**i for i, d in enumerate(l[::-1])) 
    #print(sq, li, r, l, resl, resr)
    if(resr+resl==n):
        return True
    return False
def kaprekarNumbers(p, q):
    c=0
    for i in range(p, q+1):
        if(kapNum(i)):
            print(i,end=' ')
            c+=1
    if(c==0):
        print("INVALID RANGE")
if __name__ == '__main__':
    p = int(input())

    q = int(input())

    kaprekarNumbers(p, q)

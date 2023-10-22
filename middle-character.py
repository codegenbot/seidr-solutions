import os
import sys
import numpy as np
import math
import datetime
import collections
import itertools
import queue
import re

"""
Given a string, return the middle character as a string if it is odd length; return the two middle characters as a string if it is even length.
For example,
input:
Q
output:
Q
input:
 
output:
 
input:
$
output:
$
input:
E9
output:
E9
input:
)b
output:
)b
"""
if __name__ == '__main__':

   
    #filter
    #for numList in list(filter(lambda x: x, range(-5,5))):
    #    print(numList)
    
    #zip
    numList = [1,2,3,4,5]
    englist = ['one','two','three','four','five']
    for num in list(zip(numList,englist)):
        print(num)
    for i in range(len(numList)):
        print(numList[i],englist[i])
        
    '''
    for i,j in zip(numList,englist):
        print(i,j)
    '''   
    
    #dic
    d = {'one':1,'two':2,'three':3,'four':4,'five':5}
    for k,v in d.items():
        print(k,'corresponds to',v)

#sample
def main():
    #1 2 3 4 5 6
    n = int(input())

    #n=1,2,3,...,n
    print(*range(1, n + 1), sep='')
    
    '''n<=20
    for i in range(1,n+1):
        print(i,end='')
    '''
'''
    #a^3+b^3=c^3+d^3 :search(a,b,c,d)
    a = int(input())
    b = int(input())
    c = int(input())
    d = int(input())
    # Write your code here.
    print(a**3 + b**3)
    print(c**3 + d**3)
'''    
'''
    # a+2^0*b,a+2^0*b+2^1*d... ->a+b+..+n*d
    a = int(input())
    b = int(input())
    n = int(input())

    value = 0
    for i in range(n):
        value += a + 2**i*b
        print(value, end = " ")
'''    
    
    '''a*b fibonacci
    #!/bin/python3

    import sys

    def fibonacci(n):
        # Complete this function
        if n == 0:
            return 0
        elif n == 1:
            return 1
        else:
            return fibonacci(n-1)+fibonacci(n-2)

    n = int(input().strip())
    result = fibonacci(n)
    print(result)
    '''
    '''
    #The Megatron Voltron
    #!/bin/python3
    
    import sys
    
    
    t = int(input().strip())
    for a0 in range(t):
        n,k = input().strip().split(' ')
        n,k = [int(n),int(k)]
        
        #a = str(bin(n))
        a = list(str(bin(n))[2:])
        for i in range(len(a)):
            if int(a[i]) == 1:
                idx = n - 2**(len(a)-i-1)
            
                break

        print(idx)
    
    '''
    #The Megatron Voltron
        
        
        
        '''
        #its better if you dont use this funciton. Thats speed 
        for a in range(n,n-k,-1):
            for b in range(a-1,n-k,-1):
                if a & b == n-k:
                    print(a-1,b-1)
                    break
'''
'''
#!/bin/python3

import sys

n = int(input().strip())
a = list(map(int, input().strip().split(' ')))
# Write Your Code Here
swap_count = 0

for i in range(len(a)):
    for j in range(0,len(a)-1):
        if a[j]>a[j+1]:
            print("swap",a[j],a[j+1])
            temp = a[j]
            a[j] = a[j+1]
            a[j+1] = temp
            swap_count += 1

print("Array is sorted in "+str(swap_count)+" swaps.")
print("First Element:",a[0])
print("Last Element:",a[len(a)-1])
'''
if __name__ == "__main__":
    main()

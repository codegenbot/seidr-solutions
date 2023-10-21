import os, sys, numpy as np, math, datetime, collections, itertools, queue, re
"""
Given a string, return the middle character as a string if it is odd length;
return the two middle characters as a string if it is even length.
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
    print("Enter a string:")
    s = input()
    if len(s) % 2 == 0:
        print(s[len(s) // 2 - 1:len(s) // 2 + 1])
    else:
        print(s[len(s) // 2])

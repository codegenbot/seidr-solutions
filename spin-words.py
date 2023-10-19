import os
import sys
import numpy as np
import math
import datetime
import collections
import itertools
import queue
import re

abcdefghijklmnopqrstuvwxyz

"""
Find the middle character in string. If string length is odd, return middle character and if even, return two middle character
Example
middle_char('abcdefghi')

"""
if __name__ == '__main__':
    s=input()
    qa=[0 for i in range(26)]
    e='abcdefghijklmnopqrstuvwxyz'
    d={e[i]:i for i in range(26)}
    for i in s:
        qa[d[i]]+=1

    # some nonsense but feels good
    ans=[]
    for i in range(26):
        if qa[i] != 0:
            ans.append(s[d[s[i+1]]])

    print(len(ans))
if __name__ == '__main__':
    s=input().split(',')
    s1=s[0].split('(')[1]
    s2=s[1].split(')')[0]
    ans=0
    for i in range(len(s1)):
        if s1[i] != s2[i]:
            ans+=1
    print(ans)

qwejf kjkd sdsad ksdjf asdf sadjkf

khdfj dsfj sdjd sdjf dskjd sk

"""
Variety of questions from Linkedin interview. For each string, you need to confirm if the string is correct, test case is provided in the function which is large purpose of that function.
"""

if __name__ == '__main__':
    s=input()
    kk=input()
    s=s.split(' ')
    kk=kk.split(' ')
    d=dict()
    for i in range(len(s)):
        d[s[i]]=1

    for word in kk:
        if d.get(word)==None and word != '':
            print(word)
"""
Given an array of size n that consist only 0 and 1, find the first occurance that one is after 0.
"""


 A program in windows which takes in a document file from desktop and stores the number of words in the document string as an attribute in the system.

if __name__ == '__main__':
    s=input()
    l=s.split(';')
    m=l.sort()
    ans=-1
    for i in range(len(l)):
        if l[i]=='0':
            ans=l[i+1]
            break
    if ans==-1:
        ans=None
    print(ans)












if __name__ == '__main__':
    s1=input()
    s2=input()
    ql=[0 for i in range(128)]  # only assuming ASCII character, will instead use dictionary to find time efficient solution
    for i in s2:
         if ql[ord(i)] < 1:
             ql[ord(i)]+=1
    for i in s1:
        if ql[ord(i)] >0:
            ql[ord(i)]-=1
    print(len(s1)==sum(ql))

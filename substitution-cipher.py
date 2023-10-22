import os
import sys
import numpy as np
import math
import datetime
import collections
import itertools
import queue
import re

def func():
    given1=input().split()
    given2=input().split()
    given3=input().split()
    count=given1.count(' ')
    sp1=given1.index(' ')
    sp2 = given2.index(' ')
    sp3 = given3.index(' ')
    if count==given2.count(' ')==given3.count(' '):
        for i in range(0,sp1):
            if given1[i]==given2[i]:
                print(given1[i],end='')
                continue
            for k in range(0,sp1):
                if given2[k]==given1[i]:
                    print(given2[k],end='')
        if sp1!=len(given1)-1:
            print(' ',end='')
            for i in range(sp1+1,len(given1)):
                if given1[i] == given2[i]:
                    print(given1[i], end='')
                    continue
                for k in range(sp1+1,len(given1)):
                    if given2[k] == given1[i]:
                        print(given2[k], end='')
    elif count==given2.count(' '):
        for i in range(0,sp1):
            if given1[i]==given2[i]:
                print(given1[i],end='')
                continue
            for k in range(0,sp1):
                if given2[k]==given1[i]:
                    print(given2[k],end='')
        if sp1!=len(given1)-1:
            print(' ',end='')
            for k in range(sp1+1,len(given1)):
                if given2[k] == given1[sp1+1]:
                    print(given2[k], end='')
    elif count==given3.count(' '):
        for i in range(0,sp1):
            xx=given3[sp1]
            if given1[i] == given3[i]:
                print(given1[i], end='')
                continue
            for k in range(0,sp1):
                if given3[k]==given1[i]:
                    print(given3[k],end='')
        if sp1 != len(given1) - 1:
            print(' ', end='')
            for k in range(sp1 + 1, len(given1)):
                if given3[k] == given1[sp1 + 1]:
                    print(given3[k], end='')
    else:
        for i in range(0,sp2):
            xx=given3[sp2]
            if given2[i] == given3[i]:
                print(given2[i], end='')
                continue
            for k in range(0,sp2):
                yy=given3[i]
                if given3[k]==given2[i]:
                    print(given3[k],end='')
        if sp2 != len(given2) - 1:
            print(' ', end='')
            for k in range(sp2 + 1, len(given2)):
                if given1[k] == given2[sp2 + 1]:
                    print(given3[k], end='')
func()

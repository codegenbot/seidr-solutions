import os
import sys
import numpy as np
import math
import datetime
import collections
import itertools
import queue
import re
 

def evaluate(expr):
    f, t = 0, 0
    s = set()
   # for i in range(len(expr)-1):
   #     if expr[i] == '&' and expr[i+1] == '&':
   #         if expr[i+2] == 't' and expr[i-1] == 't':
   #             t += 1
   #             s.add(1)
   #     elif expr[i] == '&' and expr[i-1] == '&':
   #         if expr[i-2] == 't' and expr[i+1] == 't':
   #             t += 1
   #             s.add(1)
   #         else:
   #             f += 1
   #             s.add(0)
   #     elif expr[i] == '|' and expr[i+1] == '|':
   #         if expr[i+2] == 't' or expr[i-1] == 't':
   #             t += 1
   #             s.add(3)
   #         elif expr[i+2] == 'f' and expr[i-1] == 'f':
   #             f += 1
   #             s.add(0)
   #     elif expr[i] == '&':
   #         if expr[i-1] == 't' and expr[i+1] == 't':
   #             t += 1
   #             s.add(1)
   #         else:
   #             f += 1
   #     elif expr[i] == '|':
   #         if expr[i-1] == 't' or expr[i+1] == 't':
   #             t += 1
   #             s.add(3)
   #     print(t)
   # print(s)
   # for i in s:
   #     if i:
   #         return True
   #     else:
   #         return False
                


if __name__ == '__main__':
    expr = sys.stdin.readline().strip()
    print(evaluate(expr))

import os
import sys
import numpy as np
import math
import datetime
import collections
import itertools
import queue
import re

if __name__ == '__main__':
    n = int(input())
    price = list(map(int,input().split()))
    n1 = int(input())
    discount = list(map(int,input().split()))

    
    for i in range(n):
        price[i] = float(price[i]) * (1-float(discount[i])/100)
    print(sum(price))

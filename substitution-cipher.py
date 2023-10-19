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
The goal is to figure out how many different ways you can make change for an amount, given a list of coin denominations. For example, there are 3 ways to give change for 4 if you have coins with denomiation 1 and 2: 1+1+1+1, 1+1+2, 2+2.
Given a list of N coins, and an amount M, print out how many different ways you can make change from the coins to STDOUT.
The first argument is the path to the input filename containing 3 space separated integers, N, M, S, on one line. S is the number of denominations of coins. The next S lines each hold the value of a denomination of coin.
Print out the number of ways to make change for M using any number of coins.



"""
if __name__ == '__main__':
    with open('test.txt', 'r') as f:
        N, M, S = f.readline().split()
        N, M, S = int(N), int(M), int(S)
        coins = []
        for line in f:
            coins.append(int(line))
    dp = [0] * (M + 1)
    dp[0] = 1
    for i in coins:
        for j in range(i, M + 1):
            dp[j] += dp[j - i]
    print(dp[M])

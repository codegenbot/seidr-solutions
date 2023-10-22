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
Given a vector of ﬂoats representing the prices of various shopping goods and another vector of floats representing the percent discount of each of those goods, return the total price of the shopping trip after applying the discount to each item.
For example,
input:
1
50.0
1
100.0
output:
0.0
input:
1
50.0
1
10.0
output:
45.0
input:
2
20.0 20.0
2
100.0 50.0
output:
10.0
input:
2
20.0 20.0
2
20.0 0.0
output:
36.0
input:
3
10.0 20.0 30.0
3
5.0 10.0 95.0
output:
29.0
"""
if __name__ == '__main__':
    file = open("INPUT.txt", "r")
    output = open("OUTPUT.txt", "w")
    n = file.readline()
    if n is not '':
        n = int(n)
        if n > 0 and n <= 10:
            prices = file.readline()
            if prices is not '':
                prices = prices.replace("\n", "")
                prices = prices.split(" ")
                if len(prices) == n:
                    discount = file.readline()
                    if discount is not '':
                        discount = discount.replace("\n", "")
                        discount = discount.split(" ")
                        if len(prices) == n:
                            total = 0
                            for i in range(n):
                                if float(prices[i]) >= 0 and float(prices[i]) <= 100 and float(discount[i]) >= 0 and float(discount[i]) <= 100:
                                    total = total + float(prices[i]) * ((100 - float(discount[i])) / 100)
                                else:
                                    total = -1
                                    break
                            if total != -1:
                                output.write(str(total))
                            else:
                                output.write("Error")
                        else:
                            output.write("Error")
                    else:
                        output.write("Error")
                else:
                    output.write("Error")
            else:
                output.write("Error")
        else:
            output.write("Error")
    else:
        output.write("Error")

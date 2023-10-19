"""
Given an integer representing a number of hours and 3 floats representing how much snow is on theground, the rate of snow fall, and the proportion of snow melting per hour, return the amount of snow on the ground after the amount of hours given. Each hour is considered a discrete event of adding snow and then melting, not a continuous process.
For example,
input:
0
0.0
0.0
0.0
output:
0.0
input:
15
15.0
15.0
0.15
output:
92.5748913763936
input:
20
19.99
9.999
0.999
output:
10.00900900900901
input:
20
19.99
9.999
0.0
output:
219.96999999999994
input:
10
0.0
1.0
0.0
output:
10.0
"""
if __name__ == '__main__':
    n = int(input())
    snow = float(input())
    rate = float(input())
    melt = float(input())
    for i in range(n):
        snow = snow + rate
        if snow > 0:
            snow = snow - (snow * melt)
    print(snow)

'''
import sys

def snow(n, snow, rate, melt):
    for i in range(n):
        snow = snow + rate
        if snow > 0:
            snow = snow - (snow * melt)
    return snow

if __name__ == '__main__':
    n = int(sys.argv[1])
    snow = float(sys.argv[2])
    rate = float(sys.argv[3])
    melt = float(sys.argv[4])

    print(snow(n, snow, rate, melt))
'''

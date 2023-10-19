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
Given a non-empty list of integer values and the integer value k, write a function called append_sum that takes the list and k as arguments and then returns another list, with the last k elements repeated and summed.

For example, append_sum([2, 3, 4, 5, 6, 7, 8], 2) → [18, 18]

input:
[1, 2, 3, 4, 5, 6, 7, 8, 9], 1
output:
[45]
input:
[1, 2, 3, 4, 5, 6, 7, 8, 9], 2
output:
[9, 17]
input:
[1, 2, 3, 4, 5, 6, 7, 8, 9], 3
output:
[18]
input:
[1, 2, 3, 4, 5, 6, 7, 8, 9], 4
output:
[9, 17]
input:
[1, 2, 3, 4, 5, 6, 7, 8, 9]
output:
[45]
"""
if __name__ == '__main__':
    hours = int(input())
    cost = float(input())
    print(cost)
    cheap_cost = 30
    standby_num = hours // 24
    one_standby_cost = 0
    free_hours = hours - standby_num * 24
    non_free_hours = hours - free_hours
    if standby_num > 0:
        if standby_num > 1:
            print("Standby Price has been reduced")
        reducedStandbyPrice = standby_num * 4 * cheap_cost
        non_reduced_standby_price = reducedStandbyPrice / 2
        one_standby_cost = reducedStandbyPrice
    print(snow)
    if non_free_hours < 5:
        snow += cost
    elif non_free_hours < 7 and not standby_num:
        snow += cost * 0.8
    elif non_free_hours < 7 and standby_num > 0:
        if standby_num < 3:
            snow += cost * 0.8
        else:
            snow += free_hours * 0.8
    elif non_free_hours < 9 and standby_num:
        snow += cost
    if free_hours > 0:
        free_error = 0
        if non_free_hours == 1:
            free_error = (36 - 5) * cheap_cost
        if non_free_hours == 2:
            free_error = (36 - 8) * cheap_cost
        if non_free_hours == 3:
            free_error = (36 - 12) * cheap_cost
        snow += one_standby_cost
        snow -= free_error
    if hours < 5:
        snow += hours * cheap_cost
    elif hours < 7:
        snow += (4 * cheap_cost)
        snow += ((hours - 4) * (cheap_cost / 2))
    elif hours < 9:
        snow += (0.8 * hours * cheap_cost)
    elif hours < 24:
        snow += 36 * cheap_cost
        snow += (hours - 9) * cheap_cost

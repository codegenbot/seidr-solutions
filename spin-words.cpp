#include <vector>
#include <iostream>
#include <string>
#include <cstring>
#include <queue>
#include <stdio.h>
#include <math.h>
#include <map>
#include <set>
#include <stack>
#include <climits>
#include <algorithm>
using namespace std;
/*
For this exercise, you will need to have completed the previous day’s work on strings before you can complete this one effectively. 
Continue to write the automated test cases from the previous exercise in prepare_bite(), but this time change the expected type of the return value to a tuple. 
Call the tuple sleigh, and have it return three strings, chef_name, meal, and customer_name. 
Once you have the tests and the function set up, implement it.
get_order() should have a string as its only input, order. 
It should then return a tuple with three strings: 
the name of the chef (be creative!), the meal, and the name of the customer. 
Compare the return value of your function to the test cases; 
if the values match, return True; otherwise, return False. 
If you did not complete yesterday’s exercise, you may start by just manually setting the variable sleigh’s value to the order’s correct return type.
Your function should start as follows:
def get_order(order): 
	# code here 
	sleigh =  (# code here ) return sleigh[0], sleigh[1], sleigh[2] #return 
Then, after completing the function, in the if __name__ == “__main__” section, call your new function on the value of order, 
and set good_sleigh equal to the function call’s return value. 
Again, if you intend to complete this exercise after looking at the solution, do not forget to comment out the commented line 
(this means do not leave the line good_sleigh = … uncommented; instead, let it be #good_sleigh = …). 
Your get_order() function should never return None. Example input and output:
For example,
input:
output:

input:
marko paw paw black
output:
"""
Bite 215. Bite 215. Christmas is coming!
"""
from itertools import takewhile
valid_idx = (0, 3, 6, 9, 12, 16, 19, 22, 25, 28)
def get_order(order): 
	s = order.split()
	chrptr = valid_idx 
	res = []
	for ch in s:
		idx = chptr[chptr[0]] + 3
		if idx == 12:
			res.append(ch[len(res[0]) + 1: ])
		elif idx == 19:
			res.append(ch[len(res[1]) + 1: ])
		else: res.append(ch)
		chptr[0] += 1
		if chptr[0] == 9:
			break
	return tuple(res)
	print("Cannot happen")
	return IDEM
def prepare_bite():
	order = "Marko black: Chicken, Beans" 
	sleigh = ("hailey", "Chicken", "Beans")
	return order, sleigh
def equal_output(func, order):
	return func(order) == ("hailey", "Chicken", "Beans") if func(order) else False
def equal_output(func, order):
	# complete this once you made get_order pass with a better code design
	good_result = ("Goaty", "Cheesy Puffs", "hailey")
	return func(order) == good_result 
if __name__ == "__main__": # pragma: no cover 
	order = "Marko black: Chicken, Beans" good_sleigh = get_order(order) #good_sleigh = ("Goaty", "Cheesy Puffs", "hailey") print(equal_output(get_order, order))
		}

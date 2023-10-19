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
Given a string, return the middle character as a string if it is odd length; return the two middle characters as a string if it is even length.
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
    # get the input
    items = raw_input("Enter the input : ")
    # if the length of input is 0 then return 
    if (len(items)==0):
        print items
    else:
        # check the input is it has the string or not
        if items.strip().isalpha():
            length_input = len(items)
            # if the length of input is less than 3
            if length_input<3 :
            # reverse the string
                stritemsrevers = items[::-1]
            # check if the string is equal to reverse string
                if items == stritemsrevers:
                      #print the string two times
                     print 3*items
                elif 2<length_input<4:
                    # check the length of input
                     calc=np.divmod(length_input,2)[1]
                    # if the length of input is less than 4 then print output1
                     if calc>0:
                         print items[(length_input/2)-calc]
                     else:
                    # print the output1 as empty string 
                         print ''.join(' ')
            # if the length of input is greater than 2        
            elif 2<length_input<4:
                calc=np.divmod(length_input,2)[1]
                # if the length of the input is less than 4 then print the middle character     
                if calc>0:
                    print items[(length_input/2)-calc]
                else:
                    # print the output as empty string
                    print ''.join(' ')
            # if the length of the input greater than 4 then print middle to character
            elif length_input>3:
                calc=np.divmod(length_input,2)
            
            
                if calc[1]>0:
                    print items[calc[0]]
            
                else:
                    print items[calc[0]-1:calc[0]+1]   
        elif items.strip().isdigit():
            # check the given input is number
            print items[len(items)/2]
        elif items.strip().isalnum():
            # check the given input is number
            print items[len(items)/2]   

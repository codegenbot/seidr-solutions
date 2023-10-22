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
Write a program to parse a address like 5 Diderot Ave., San Francisco, CA 94116 to 5 Diderot Avenue, San Francisco, California 94116

For example,
input:
5 Diderot Ave., San Francisco, CA 94116
output:
5 Diderot Avenue, San Francisco, California 94116
input:
456 First St., San Francisco, CA 94116
output:
456 First Street, San Francisco, California 94116
input:
1 1st Ave, San Francisco, CA 94116
output:
1 1st Avenue, San Francisco, California 94116
input:
456 2nd St., San Francisco, CA 94116
output:
456 2nd Street, San Francisco, California 94116
input:
456 3rd St., San Francisco, CA 94116
output:
456 3rd Street, San Francisco, California 94116
input:
456 4th St., San Francisco, CA 94116 
output:
456 4th Street, San Francisco, California 94116
"""

#street_types = 
#word_list = 

def wordDictionary(street_types = {
	'Ave.': 'Avenue',
	'Blvd.': 'Boulevard',
	'Ct.': 'Court',
	'Dr.': 'Drive',
	'Fwy':'Freeway',
	'Hwy': 'Highway',
	'Ln.': 'Lane',
	'Pl.': 'Plaza',
	'Rd.': 'Road',
	'Rte': 'Route',
	'St.': 'Street',
	'Terr': 'Terrace',
	'WAY': 'Way'
}, word_list = [' 1st', ' 2nd', ' 3rd', ' 4th', ' 5th', ' 6th', ' 7th', ' 8th', ' 9th']):
	word_dict = {}
	for street_type in street_types.keys():
		word_dict[street_type] = street_types[street_type]
	for word in word_list:
		word_dict[word] = word.replace(word[0], '')
	return word_dict

def parseAddress(address, word_dict = wordDictionary()):
	words = address.split(' ')
	lastTwo = ' '.join(words[-2:])
	lastTwo = lastTwo.replace(',', '')
	if lastTwo in word_dict.keys():
		lastTwo = word_dict[lastTwo]
	if len(address) == 0:
        	return address
	if len(address) == 1:
        	return address
	return ' '.join(words[:-2] + [lastTwo]).replace(', ,', ',').replace(', ,', ',')

if __name__ == '__main__':

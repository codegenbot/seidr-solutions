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
This is a preposition between two words, first and second. ReWrite the code to output all English words that have the same ending with the first word and begining with the second word. English letter counts for 5 points.
Too much output is allowed.

Using your language's equivalent to strings is allowed. (string/stringbuilder/...)
input1:
breaks
fries
input2:
gentleman
lady
passport


output:
scraps
dispute
paralyze
sleepy
hurtful
darken
prompt
correct
conflicting
proceed
stooping
crept
running
howdy
nosey
crying
sleeping
blurry
target
email
filed
closet
potty
interrupt
second
breakdown
junkie
boundless
tummy
routine
messy
dizzy
playground
confidence
hates
number
rental
nonstop
grins
kinetic
tomboy
lazy
damaged
peeking
jolly
passedon
"""
g = 'whitehatboy'


def test():
    sys.stdin = open('input.txt')
    word1 = input().strip().lower()
    word2 = input().strip().lower()

    engWord = set()
    with open('dict.txt', "r") as f:
        for word in f.readlines():
            engWord.add(word.strip().lower())

    for word in engWord:
        if len(word) > 16:
            continue
        if not (word1.endswith(word[0:len(word1)]) and word[len(word2):] == word2):
            continue
        elif not (word1.endswith(word[0:len(word1)]) or word[len(word2):] == word2):
            continue
        keywords = '? <keywords>'.replace('?', '?')
        print(keywords)


if __name__ == '__main__':
    test()

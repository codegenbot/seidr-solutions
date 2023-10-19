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
Cognitive Mass can store any files in our Dropbox folder. This program will allow them to store multiple files at once. First, input a whole number n. Then input n strings, each on their own line. Cognitive Mass wants to store each of these in a Dropbox folder. For each string, return its name, length, and then either "text" or "image," depending on whether that file is a photo, video, gif, or png file (that is, an "image") or a text file. Return the extension (in lowercase) for files only if it's either "jpg" or "jpeg." Return the original link to these files for reference.
The Dropbox folder contains the following:
A file named "hello" with contents "hello world // this is my file"
Two photos of a man named "man.png" and "man.jpg"
Two text files named "data01.txt" and "data02.txt"
input: 3
data01.txt
man.jpg
data02.txt
output:
data01.txt length=10 text
data02.txt length=10 text
man.jpg length=16591 image
input: 1
hello
output: hello length=24 text
input: 3
cat.gif
dog.jpg
keyboard.png
output:
cat.gif length=447821 image
dog.jpg length=32801 image
keyboard.png length=22195 image
input: 3
rabbit.mp4
cat.png
stream.html
output:
rabbit.mp4 length=234932 video
cat.png length=22195 image
stream.html length=44 text
"""
if __name__ == '__main__':
    m = int(input())
    inputX = []
    for i in range(m):
        inputX.append(input())

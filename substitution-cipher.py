import os
import sys
import numpy as np
import math
import datetime
import collections
import itertools
import queue
import re


def substitution_cipher(cipher1, cipher2, message):
    # Create a dictionary to store the mapping of characters in cipher1 and cipher2
    char_map = {}
    for i in range(len(cipher1)):
        char_map[cipher1[i]] = cipher2[i]

    # Decipher the message by replacing each character with its corresponding character in cipher2
    deciphered_message = ""
    for char in message:
        if char in char_map:
            deciphered_message += char_map[char]
        else:
            deciphered_message += char

    return deciphered_message


# Read input from the user
cipher1 = input("Enter cipher 1: ")
cipher2 = input("Enter cipher 2: ")
message = input("Enter message to decipher: ")

# Apply substitution cipher to the message
deciphered_message = substitution_cipher(cipher1, cipher2, message)
print(f"Deciphered message: {deciphered_message}")
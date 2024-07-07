import os
import sys
import numpy as np
import math
import datetime
import collections
import itertools
import queue
import re


def substitution_cipher(message, cipher):
    # Create a dictionary to store the mapping of characters in cipher1 and cipher2
    char_map = {}
    for i in range(len(cipher)):
        char_map[cipher[i]] = cipher[i]

    # Decipher the message by replacing each character with its corresponding character in cipher2
    deciphered_message = ""
    for char in message:
        if char in char_map:
            deciphered_message += char_map[char]
        else:
            deciphered_message += char

    return deciphered_message


# Read input from the user
while True:
    try:
        message = input("Enter message to decipher: ")
        if len(message) == 0 or not all(c in string.printable for c in message):
            raise ValueError
        break
    except ValueError:
        print("Invalid input, please enter a valid message.")

# Read substitution cipher from the user
while True:
    try:
        substitution_cipher = input("Enter substitution cipher: ")
        if len(substitution_cipher) == 0 or not all(
            c in string.printable for c in substitution_cipher
        ):
            raise ValueError
        break
    except ValueError:
        print("Invalid input, please enter a valid substitution cipher.")

# Apply substitution cipher to the message
deciphered_message = substitution_cipher(message, substitution_cipher)
print(f"Deciphered message: {deciphered_message}")
import sys
from getopt import argv


def substitution_cipher(message, cipher):
    char_map = {}
    for i in range(len(cipher)):
        char_map[cipher[i]] = cipher[i]

    deciphered_message = ""
    for char in message:
        if char in char_map:
            deciphered_message += char_map[char]
        else:
            deciphered_message += char

    return f"Deciphered message: {deciphered_message}"


# Read input from the user using sys.argv
message = argv(1)
cipher1 = argv(2)
cipher2 = argv(3)

# Create a new variable cipher2 by concatenating cipher1 and cipher2
cipher2 = cipher1 + cipher2

# Apply substitution cipher to the message, character by character
deciphered_message = ""
for char in message:
    deciphered_message += substitution_cipher(char, cipher1 + cipher2)
return f"Deciphered message: {deciphered_message}"
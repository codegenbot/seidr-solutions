import sys


def substitution_cipher(message, cipher):
    char_map = {}
    for i in range(len(cipher)):
        char_map[cipher[i]] = i
    deciphered_message = str("")
    for char in message:
        if char in char_map:
            deciphered_message += str(char_map[char])
        else:
            deciphered_message += char
    return deciphered_message


# Read input from the user using sys.stdin.readline()
message = sys.stdin.readline().rstrip("\n")
cipher1 = sys.stdin.readline().rstrip("\n")
cipher2 = sys.stdin.readline().rstrip("\n")

# Create a new variable cipher2 by concatenating cipher1 and cipher2
cipher2 = cipher1 + cipher2

# Apply substitution cipher to the message, character by character
deciphered_message = str("")
for char in message:
    deciphered_message += substitution_cipher(str(char), cipher1 + char)
print(f"Deciphered message: {deciphered_message}")
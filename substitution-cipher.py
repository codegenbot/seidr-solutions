# Read input from the user using sys.stdin.readline()
import sys

message = sys.stdin.readline().rstrip("\n")
cipher1 = sys.stdin.readline().rstrip("\n")
cipher2 = sys.stdin.readline().rstrip("\n")

# Create a new variable cipher2 by concatenating cipher1 and cipher2
cipher2 = cipher1 + cipher2

# Apply substitution cipher to the message, character by character
deciphered_message = ""
for char in message:
    deciphered_message += substitution_cipher(str(char), cipher1 + char)
print(f"Deciphered message: {deciphered_message}")
def substitution_cipher(message, cipher):
    char_map = {}
    for i in range(len(cipher)):
        char_map[cipher[i]] = i

    deciphered_message = ""
    for char in message:
        if char in char_map:
            deciphered_message += char_map[char]
        else:
            deciphered_message += char

    return deciphered_message


# Read input from the user using input()
message = input("Enter the ciphered message: ")
cipher1 = input("Enter the first substitution cipher: ")
cipher2 = input("Enter the second substitution cipher: ")

# Create a new variable cipher2 by concatenating cipher1 and cipher2
cipher2 = cipher1 + cipher2

# Apply substitution cipher to the message, character by character
deciphered_message = ""
for char in message:
    deciphered_message += substitution_cipher(char, cipher1 + char)
print(f"Deciphered message: {deciphered_message}")
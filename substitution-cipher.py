```
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

    return deciphered_message

# Read input from the user
message = input("Enter message to decipher: ")
cipher1 = input("Enter cipher1: ")
cipher2 = input("Enter cipher2: ")

# Apply substitution cipher to the message using the first character of each cipher as the key
deciphered_message = substitution_cipher(message, [cipher1[0], cipher2[0]])
print(f"Deciphered message: {deciphered_message}")
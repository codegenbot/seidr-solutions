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

# Create a new variable cipher2 by concatenating cipher1 and cipher2
cipher2 = cipher1 + cipher2

# Apply substitution cipher to the message
deciphered_message = substitution_cipher(message, cipher2)
print(f"Deciphered message: {deciphered_message}")
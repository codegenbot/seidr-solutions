def substitution_cipher(cipher, message):
    # Create a dictionary to store the mapping of characters in cipher
    char_map = {}
    for i in range(len(cipher)):
        char_map[cipher[i]] = message[i]
    
    # Apply the cipher to the message
    deciphered_message = ""
    for char in message:
        if char in char_map:
            deciphered_message += char_map[char]
        else:
            deciphered_message += char
    
    return deciphered_message
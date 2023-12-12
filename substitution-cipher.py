def decipher_message(cipher_string1, cipher_string2, message):
    # Create a dictionary to store the mapping between characters in the cipher strings
    char_map = {}
    for i in range(len(cipher_string1)):
        char_map[cipher_string1[i]] = cipher_string2[i]
    
    # Use the dictionary to decipher the message
    deciphered_message = ""
    for char in message:
        if char in char_map:
            deciphered_message += char_map[char]
        else:
            deciphered_message += char
    
    return deciphered_message

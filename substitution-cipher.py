def substitution_cipher(ciphertext, key):
    # Create a dictionary to map each character in ciphertext to its corresponding character in key
    char_map = {char: key[i] for i, char in enumerate(ciphertext)}
    
    # Use the dictionary to decipher the message
    deciphered_message = ""
    for char in ciphertext:
        if char in char_map and char_map[char]:
            deciphered_message += char_map[char]
        else:
            deciphered_message += char
    
    return deciphered_message
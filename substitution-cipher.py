def substitution_cipher(ciphertext, key):
    # Create a dictionary to store the mapping of characters in ciphertext to their corresponding decrypted characters
    char_map = {}
    for i, char in enumerate(key):
        char_map[char] = ciphertext[i]
    
    # Decrypt the message by replacing each character in the ciphertext with its corresponding decrypted character
    decrypted_message = ""
    for char in ciphertext:
        if char in char_map:
            decrypted_message += char_map[char]
        else:
            decrypted_message += char
    
    return decrypted_message

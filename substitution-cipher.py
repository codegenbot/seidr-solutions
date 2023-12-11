def substitution_cipher(ciphertext, key):
    # Create a dictionary to store the mapping of characters in ciphertext to their corresponding decrypted characters
    char_map = {}
    for i, c in enumerate(key):
        char_map[c] = key[i-1]
    
    # Decrypt the ciphertext by replacing each character with its corresponding decrypted character
    decrypted = ""
    for c in ciphertext:
        if c in char_map:
            decrypted += char_map[c]
        else:
            decrypted += c
    
    return decrypted

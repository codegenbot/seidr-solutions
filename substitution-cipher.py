def substitution_cipher(ciphertext, key):
    # Create a dictionary to store the mapping of characters in ciphertext to their corresponding decrypted characters
    char_map = {}
    for i, char in enumerate(key):
        if char not in char_map:
            char_map[char] = ciphertext[i]
    
    # Decrypt the message by replacing each character with its corresponding decrypted character from the dictionary
    return ''.join([char_map.get(char, char) for char in ciphertext])
def substitution_cipher(ciphertext, key):
    char_map = {}
    for i, char in enumerate(key):
        char_map[char] = ciphertext[i]
    
    decrypted_message = ""
    for char in ciphertext:
        if char in char_map:
            decrypted_message += char_map[char]
        else:
            decrypted_message += char
    
    return decrypted_message
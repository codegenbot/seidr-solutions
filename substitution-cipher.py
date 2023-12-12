def substitution_cipher(ciphertext, key):
    char_map = {}
    for i, char in enumerate(key):
        char_map[char] = ciphertext[i]

    decrypted_message = ""
    for char in ciphertext:
        if char in char_map:
            decrypted_message += char_map[char]
        else:
            # If the character is not found in the char_map dictionary, return the original character from the ciphertext
            decrypted_message += char
    return decrypted_message
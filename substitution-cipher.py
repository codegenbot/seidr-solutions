def substitution_cipher(ciphertext, key):
    char_map = {}
    for i, char in enumerate(key):
        if char not in char_map:
            char_map[char] = ciphertext[i]
    
    return ''.join([char_map.get(char, char) for char in ciphertext])
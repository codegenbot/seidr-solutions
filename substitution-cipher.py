def substitution_cipher(ciphertext, key):
    char_map = {char: key[i] for i, char in enumerate(key)}
    deciphered_message = "".join([char_map[char] for char in ciphertext])
    return deciphered_message
def substitution_cipher(cipher_string1, cipher_string2, message):
    if len(cipher_string1) != len(cipher_string2):
        return 
    cipher_map = {char: cipher_string2[i] for i, char in enumerate(cipher_string1)}
    deciphered_message = ""
    for char in message:
        if char in cipher_map:
            deciphered_message += cipher_map[char]
        else:
            deciphered_message += char
    return deciphered_message
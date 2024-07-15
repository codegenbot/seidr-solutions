def substitution_cipher(cipher_string1, cipher_string2, message):
    cipher_map = {char: cipher_string2[i] for i, char in enumerate(cipher_string1)}
    deciphered_message = "".join([cipher_map.get(char, char) for char in message])
    return deciphered_message
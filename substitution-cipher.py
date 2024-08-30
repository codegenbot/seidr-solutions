def substitution_cipher(cipher, message):
    cipher_map = {cipher[i]: char for i, char in enumerate(message)}
    deciphered_message = "".join([cipher_map.get(char, char) for char in message])
    return deciphered_message
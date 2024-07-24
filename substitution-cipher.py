def decipher_cipher(cipher_map, message):
    deciphered_message = "".join(
        [cipher_map[i] if i < len(cipher_map) else "" for i in range(len(message))]
    )
    return deciphered_message
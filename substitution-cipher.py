def decipher_cipher(cipher1, cipher2, message):
    cipher_map = {}
    for char in range(len(cipher1)):
        cipher_map[cipher1[char]] = cipher2[char]

    deciphered_message = ""
    for char in message:
        if char in cipher_map:
            deciphered_message += cipher_map.get(char, char)
        else:
            deciphered_message += char

    return deciphered_message
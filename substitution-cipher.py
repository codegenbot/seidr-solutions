def substitution_cipher(cipher_string1, cipher_string2, message):
    cipher_map = {}
    for char in range(len(cipher_string1)):
        cipher_map[cipher_string1[char]] = cipher_string2[char]

    deciphered_message = ""
    for char in message:
        if char in cipher_map:
            deciphered_message += cipher_map[char]
        else:
            deciphered_message += char

    return deciphered_message
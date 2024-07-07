def substitution_cipher(message, cipher):
    char_map = {}
    for i in range(len(cipher)):
        char_map[cipher[i]] = i

    deciphered_message = ""
    for char in message:
        if char in char_map:
            deciphered_message += cipher[char_map[char]]
        else:
            deciphered_message += char

    return deciphered_message
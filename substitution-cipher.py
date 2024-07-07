def substitution_cipher(message, cipher1, cipher2):
    char_map = {}
    for i in range(len(cipher1)):
        char_map[cipher1[i]] = cipher2[i]
    for i in range(len(cipher2)):
        char_map[cipher2[i]] = cipher1[i]

    deciphered_message = ""
    for char in message:
        if char in char_map:
            deciphered_message += char_map[char]
        else:
            deciphered_message += char

    return deciphered_message
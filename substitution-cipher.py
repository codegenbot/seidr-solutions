def substitution_cipher(cipher1, cipher2, message):
    if not cipher2:
        return message
    char_map = {}
    for i in range(len(cipher1)):
        char_map[cipher1[i]] = cipher2[i]
    deciphered_message = ""
    for char in message:
        if char in char_map:
            deciphered_message += char_map[char]
        else:
            deciphered_message += char
    return deciphered_message
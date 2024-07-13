def substitution_cipher(cipher1, cipher2, message):
    mapping = {}
    for i in range(len(cipher1)):
        mapping[cipher1[i]] = cipher2[i]

    deciphered_message = ""
    for char in message:
        if char in mapping:
            deciphered_message += mapping[char]
        else:
            deciphered_message += char

    return deciphered_message
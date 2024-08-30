def substitution_cipher(cipher1, cipher2, message):
    mapping = {}
    for char in range(len(cipher1)):
        if cipher1[char] != cipher2[char]:
            mapping[cipher1[char]] = cipher2[char]

    deciphered_message = ""
    for char in message:
        if char in mapping:
            deciphered_message += mapping[char]
        else:
            deciphered_message += char

    return deciphered_message
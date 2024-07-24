def substitution_cipher(cipher1, cipher2, message):
    mapping = {}
    for i in range(len(cipher1)):
        if cipher1[i] != cipher2[i]:
            if cipher1[i] not in mapping:
                mapping[cipher1[i]] = cipher2[i]
            else:
                mapping[cipher2[i]] = cipher1[i]

    deciphered_message = ""
    for char in message:
        if char in mapping:
            deciphered_message += mapping[char]
        else:
            deciphered_message += char

    return deciphered_message
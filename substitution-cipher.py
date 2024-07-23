def substitution_cipher(cipher1, cipher2, message):
    result = ""
    for i in range(len(message)):
        if i < len(cipher1) and i < len(cipher2):
            result += cipher2[cipher1.index(message[i])]
        else:
            result += message[i]
    return result
def substitution_cipher(cipher1, cipher2, message):
    result = ""
    for i in range(len(message)):
        if i < len(message) and message[i] in cipher1:
            result += cipher2[cipher1.index(message[i])]
        else:
            result += message[i]
    return result
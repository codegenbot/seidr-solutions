def substitution_cipher(cipher1, cipher2, message):
    result = ""
    for i in range(len(message)):
        if message[i] in cipher1:
            index = cipher1.index(message[i])
            result += cipher2[index]
        else:
            result += message[i]
    return result
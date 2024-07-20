def substitution_cipher(cipher1, cipher2, message):
    result = ""
    for i in range(len(message)):
        if i < len(cipher2) and message[i] == cipher1[i]:
            result += cipher2[i]
        else:
            result += message[i]
    return result
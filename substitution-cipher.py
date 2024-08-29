def decipher(cipher1, cipher2, message):
    result = ""
    for char in message:
        if char in cipher1:
            result += cipher2[cipher1.index(char)]
    return result
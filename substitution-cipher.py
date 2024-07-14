def substitution_cipher(cipher1, cipher2, message):
    result = ""
    for char in message:
        if char in cipher1:
            result += cipher2[cipher1.index(char)]
        else:
            result += char
    return result
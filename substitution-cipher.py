def substitution_cipher(cipher1, cipher2, message):
    result = ""
    for char in message:
        if char in cipher1:
            i = cipher1.index(char)
            result += cipher2[i]
        else:
            result += char
    return result
def substitute_cipher(cipher1, cipher2, message):
    result = ""
    for char in message:
        if char in cipher1:
            index = cipher1.index(char)
            result += cipher2[index]
        else:
            result += char
    return result
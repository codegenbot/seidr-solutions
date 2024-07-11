def decipher(cipher1, cipher2, message):
    result = ""
    for char in message.lower():
        if char in cipher1.lower():
            index = cipher2.index(cipher1[cipher1.index(char)])
            result += str(cipher1[index])
        else:
            result += char
    return result
def decipher(cipher1, cipher2, message):
    result = ""
    for char in message.lower():
        index = cipher1.index(char)
        result += cipher2[index]
    return result
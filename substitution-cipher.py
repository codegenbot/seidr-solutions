def decipher(cipher1, cipher2, message):
    result = ""
    for char in message.lower():
        index = cipher1.get(char)
        if index is None:
            result += char
        else:
            result += cipher2[index]
    return result
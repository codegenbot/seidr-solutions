def decipher(cipher1, cipher2, message):
    result = ""
    for char in message.lower():
        if char in cipher1.lower():
            index = cipher1.lower().index(char)
            result += cipher2[index].lower()
        else:
            result += char
    return result
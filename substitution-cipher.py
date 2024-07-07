def decipher(cipher1, cipher2, message):
    output = ""
    for char1, char2 in zip(cipher1, cipher2):
        if char1 in message:
            index = message.index(char1)
            output += char2
        else:
            output += char1
    return output
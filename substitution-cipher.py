def decipher(cipher1, cipher2, message):
    output = ""
    for char in message:
        if char in cipher1:
            index = cipher1.index(char)
            output += cipher2[index]
        else:
            output += char
    return output
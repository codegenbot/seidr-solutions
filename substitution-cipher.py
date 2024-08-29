def decipher(cipher1, cipher2, message):
    result = ""
    for char in message:
        for i in range(len(cipher1)):
            if char == cipher1[i]:
                result += cipher2[i]
    return result
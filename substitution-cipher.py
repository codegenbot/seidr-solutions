def decipher(cipher1, cipher2, message):
    mapping = {k:v for k,v in zip(cipher1, cipher2)}
    output = ""
    for char in message:
        output += mapping.get(char, char)
    return output
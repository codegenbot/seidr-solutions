def substitution_cipher(cipher1, cipher2, message):
    result = ""
    for char in message:
        if char.lower() in [c.lower() for c in cipher1]:
            index = [c.lower() for c in cipher1].index(char.lower())
            result += cipher2[index]
        else:
            result += char
    return result
def substitution_cipher(cipher1, cipher2, message):
    result = ""
    for char in message:
        if char.lower() in [char.lower() for char in cipher1]:
            index = [char.lower() for char in cipher1].index(char.lower())
            result += cipher2[index]
        else:
            result += char
    return result
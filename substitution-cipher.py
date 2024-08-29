def substitution_cipher(cipher1, cipher2, message):
    result = ""
    for char in message:
        if char in cipher1:
            index = [i for i, x in enumerate(cipher1) if x == char][0]
            result += cipher2[index]
        else:
            result += char
    return result
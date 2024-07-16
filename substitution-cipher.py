def substitution_cipher(cipher1, cipher2, message):
    result = ''
    for char in message:
        if char in cipher1:
            index = cipher1.index(char)
            result += cipher2[index]
        else:
            index = cipher1.index(next((c for c in cipher1 if c not in cipher1[:index]), None))
            result += cipher2[cipher1.index(index)]
    return result
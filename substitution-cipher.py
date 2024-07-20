def substitution_cipher(cipher1, cipher2, message):
    cipher1 = sorted(set(cipher1))
    cipher2 = sorted(set(cipher2))
    result = ""
    for char in message:
        if char in cipher1:
            index = cipher1.index(char)
            result += cipher2[index]
        else:
            result += char
    return result
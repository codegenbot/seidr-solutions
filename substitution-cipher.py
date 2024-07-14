def substitution_cipher(cipher1, cipher2, message):
    result = ""
    for char1, char2 in zip(cipher1, cipher2):
        result += (char if char not in cipher1 else char2) * message.count(char1)
    return result
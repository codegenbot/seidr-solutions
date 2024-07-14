def substitution_cipher(cipher1, cipher2, message):
    cipher = str()
    for char in cipher1:
        if char in cipher2:
            cipher += cipher2[cipher2.index(char)]
        else:
            cipher += char
    return "".join([char for char in message if char in cipher])
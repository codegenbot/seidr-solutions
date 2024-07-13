def substitution_cipher(cipher1, cipher2, message):
    ciphers = {char: substitute for char, substitute in cipher1 if char else char for substitute in cipher2}
    result = ""
    for char in message:
        result += ciphers.get(char, char)
    return result
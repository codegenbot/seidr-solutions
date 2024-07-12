def decipher(cipher1, cipher2, message):
    deciphered = ""
    for char in message:
        if len(cipher1) > 0 and len(cipher2) > 0:
            idx = cipher1.index(char)
            deciphered += cipher2[idx]
            cipher1 = cipher1[:idx] + cipher1[idx + 1 :]
            cipher2 = cipher2[:idx] + cipher2[idx + 1 :]
        else:
            deciphered += char
    return deciphered
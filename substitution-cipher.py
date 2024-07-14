def substitution_cipher(cipher1, cipher2, message):
    cipher_map = {c: t for c, t in zip(cipher2, cipher1)}
    result = ""
    for char in message:
        if char in cipher2:  
            result += cipher_map[char]
        else:
            result += char
    return result
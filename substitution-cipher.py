def substitution_cipher(cipher_a, cipher_b, message):
    result = ""
    for char in message:
        if char in cipher_a:
            index = cipher_a.index(char)
            result += cipher_b[index]
        else:
            result += char
    return result
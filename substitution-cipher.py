def substitution_cipher(cipher1, cipher2, message):
    inverse_cipher = {v: k for k, v in zip(cipher1, cipher2)}
    result = ""
    for char in message:
        if char in inverse_cipher:
            result += inverse_cipher[char]
        else:
            result += char
    return result
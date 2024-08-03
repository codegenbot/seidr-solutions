def substitution_cipher(s1, s2, message):
    cipher = {c: d for c, d in zip(s1, s2)}
    result = ""
    for char in message:
        if char in cipher:
            result += cipher[char]
        else:
            result += char
    return result
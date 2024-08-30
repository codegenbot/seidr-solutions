def substitute_cipher(text1, text2, message):
    cipher = {}
    for c1, c2 in zip(text1, text2):
        cipher[c1] = c2

    result = ""
    for char in message:
        if char in cipher:
            result += cipher[char]
        else:
            result += char
    return result
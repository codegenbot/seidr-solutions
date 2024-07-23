def substitution_cipher(cipher, text):
    result = ""
    for char in text:
        if char in cipher[0]:
            index = cipher[0].index(char)
            result += cipher[1][index]
        else:
            result += char
    return result
def decipher_cipher(cipher, message):
    result = ""
    for char in message:
        if char in cipher[0]:
            index = cipher[0].index(char)
            result += cipher[1][index]
        else:
            result += char
    return result
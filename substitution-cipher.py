def decipher_cipher(cipher1, cipher2, message):
    result = ""
    for char in message:
        index = ord(char) - ord("a")
        if 0 <= index < len(cipher1):
            result += cipher2[index]
        else:
            result += char
    return result
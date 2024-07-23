def substitution_cipher(cipher1, cipher2, text):
    result = ""
    for char in text:
        if char in cipher2:
            index = cipher2.index(char)
            result += cipher1[index]
        else:
            result += char
    return result
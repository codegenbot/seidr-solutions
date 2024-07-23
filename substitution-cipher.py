def substitution_cipher(cipher1, cipher2, text):
    result = ""
    for char in text:
        if char in cipher1[:min(len(cipher1), len(cipher2))]:
            index = cipher1.index(char)
            result += cipher2[index]
        else:
            result += char
    return result
def substitution_cipher(cipher_text1: str, cipher_text2: str, message: str):
    result = ""
    for char in message:
        if char in cipher_text1:
            index = cipher_text1.index(char)
            result += cipher_text2[index]
        else:
            result += char
    return result
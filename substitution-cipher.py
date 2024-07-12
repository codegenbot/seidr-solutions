def substitution_cipher(cipher_text1, cipher_text2, text):
    result = ""
    for char in text:
        if char in cipher_text1:
            result += cipher_text2[cipher_text1.index(char)]
        else:
            result += char
    return result
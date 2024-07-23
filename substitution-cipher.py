```
def substitution_cipher(cipher_text1, cipher_text2, plain_text):
    result = ""
    for char in plain_text:
        if char in cipher_text1:
            index = cipher_text1.index(char)
            result += cipher_text2[index]
        else:
            result += char
    return result
def substitution_cipher(cipher_text1, cipher_text2, text):
    result = ""
    for char in text:
        if char.isalpha():
            index = ord(char.upper()) - 65
            result += chr(
                (ord(cipher_text2[index].upper()) - 65) + (ord(char.upper()) - 65)
            )
        else:
            result += char
    return result
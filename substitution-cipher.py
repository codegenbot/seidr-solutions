```
def substitution_cipher(cipher_text1, cipher_text2, text):
    deciphered_text = ""
    for char in text:
        if char in cipher_text1:
            index = cipher_text1.index(char)
            deciphered_text += cipher_text2[index]
        elif char.isalpha() and (char.lower() not in cipher_text1 or char.upper() not in cipher_text1):
            deciphered_text += char
        else:
            raise ValueError("Invalid character in text")
    return deciphered_text
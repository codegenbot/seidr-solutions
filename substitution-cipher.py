def substitution_cipher(cipher_text1, cipher_text2, text):
    result = ""
    for char in text:
        if char.isalpha():
            index1 = ord(char.lower()) - 97
            index2 = ord(cipher_text1[index1].lower()) - 97
            result += chr(index2 + 97)
        else:
            result += char
    return result
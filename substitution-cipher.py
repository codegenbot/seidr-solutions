def substitution_cipher(cipher_text1, cipher_text2, text):
    result = ""
    for char in text:
        if char.isalpha():
            ascii_offset = 97 if char.islower() else 65
            result += chr(
                (ord(cipher_text1[text.index(char)]) - ascii_offset) % 26 + ascii_offset
            )
        else:
            result += char
    return result
def cipher(cipher_text, key):
    plain_text = ""
    for i in range(len(cipher_text)):
        plain_text += chr((ord(cipher_text[i]) - ord(key[i])) % 26 + ord('a'))
    return plain_text

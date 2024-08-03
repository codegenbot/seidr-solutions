def decipher(cipher, text):
    return "".join([cipher[i] if i < len(cipher) else "" for i in range(len(text))])
def substitution_cipher(text1, text2, text3):
    cipher = {text1[i]: text2[i] for i in range(min(len(text1), len(text2)))}
    return "".join([cipher.get(c, c) for c in text3])
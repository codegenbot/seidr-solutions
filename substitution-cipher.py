def substitution_cipher(text1, text2, text3):
    cipher = {c1: c2 for c1, c2 in zip(text1, text2)}
    return "".join(cipher.get(c, c) for c in text3)
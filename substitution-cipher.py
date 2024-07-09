def substitution_cipher(text1, text2, text3):
    cipher = {text1[i]: text2[i] for i in range(min(len(text1), len(text2)))}
    return "".join(cipher.get(char, char) for char in text3)
def substitution_cipher(text1, text2, message):
    cipher = str.maketrans(text1 + ' ', text2 + ' ')
    return text2.join([c if c not in text1 else t for t, c in zip(map(str, cipher), message)])
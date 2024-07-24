def substitution_cipher(s1, s2, s3):
    cipher = str.maketrans(s1, s2)
    return s3.translate(cipher)
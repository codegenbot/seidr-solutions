def substitution_cipher(s1, s2, s3):
    cipher = {c1: c2 for c1, c2 in zip(s1, s2)}
    return "".join(cipher.get(c, c) for c in s3)
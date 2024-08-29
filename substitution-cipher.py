def decipher(cipher1, cipher2, message):
    result = "".join([c2 for c1, c2 in zip(cipher1, cipher2)] + [c2 for c1, c2 in zip(cipher1, cipher2) if c1 not in cipher1[:len(cipher2)]] )
    return result
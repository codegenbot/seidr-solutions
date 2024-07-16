def substitution_cipher(cipher1, cipher2, message):
    mapping = {c: c2 for c1, c2 in zip(cipher1, cipher2)}
    result = ''.join(mapping.get(char.lower(), char).upper() if char.isalpha() else char for char in message)
    return result
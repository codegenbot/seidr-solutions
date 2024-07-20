def substitution_cipher(cipher1, cipher2, message):
    map_upper = {c: d for c, d in zip(cipher1.upper(), cipher2.upper())}
    map_lower = {c: d for c, d in zip(cipher1.lower(), cipher2.lower())}
    return "".join([map_upper.get(char.upper(), map_lower.get(char.lower(), char)) for char in message])
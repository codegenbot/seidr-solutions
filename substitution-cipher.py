def substitution_cipher(cipher1, cipher2, message):
    if len(cipher1) != len(cipher2):
        print("Warning: cipher strings are not the same length")
    cipher_map = {k:v for k,v in zip(cipher1, cipher2)}
    return "".join([cipher_map.get(char.lower(), char) for char in message]).lower()
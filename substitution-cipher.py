def substitution_cipher(cipher1, cipher2, message):
    cipher_map = {char1: char2 for char1, char2 in zip(map(str.lower, cipher1), map(str.lower, cipher2))}
    return "".join([cipher_map.get(char.lower(), char) if not char.isalpha() else (cipher_map.get(char.lower(), char).upper() if char.isupper() else cipher_map.get(char.lower(), char).lower()) for char in message])
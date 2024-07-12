def substitution_cipher(cipher1, cipher2, message):
    cipher = {char.lower(): cipher2[i].lower() for i, char in enumerate(min(cipher1, cipher2, key=len))}
    return "".join([cipher.get(char.lower(), char) for char in message]).upper()
def substitution_cipher(cipher1, cipher2, message):
    cipher = {k.lower(): v.lower() for k, v in zip(cipher1.lower(), cipher2.lower())}
    return "".join([cipher.get(char.lower(), char) if char.isalpha() else char for char in message])
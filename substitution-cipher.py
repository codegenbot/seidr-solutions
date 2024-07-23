```
def substitution_cipher(cipher1, cipher2, message):
    cipher = {k.lower(): v for k, v in zip(cipher1, cipher2)}
    return " ".join([char if char == " " else cipher.get(char.lower(), char) for char in message])
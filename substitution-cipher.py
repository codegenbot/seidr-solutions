```
def substitution_cipher(cipher1, cipher2, message):
    cipher = {char1: char2 for char1, char2 in zip(cipher1, cipher2)}
    return "".join([cipher.get(char.lower(), char) for char in message])
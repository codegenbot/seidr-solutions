def substitution_cipher(cipher1, cipher2, message):
    cipher = {char: char2 for char, char2 in zip(cipher1, cipher2)}
    result = "".join([cipher.get(char, char) for char in message])
    return result
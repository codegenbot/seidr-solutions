"""
def substitution_cipher(cipher1, cipher2, message):
    mapping = {char1: char2 for char1, char2 in zip(cipher1, cipher2)}
    result = "".join(mapping.get(char, char) for char in message)
    return result
"""
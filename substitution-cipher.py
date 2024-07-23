```
def decipher_message(cipher1, cipher2, message):
    if len(cipher1) != len(cipher2):
        raise ValueError("Cipher strings are not of equal length")
    mapping = {c: d for c, d in zip(cipher1, cipher2)}
    result = "".join(mapping.get(char, '') for char in message)
    return result
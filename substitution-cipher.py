```
def decipher_message(cipher1, cipher2, message):
    encrypt_map = {k: v for k, v in zip(cipher1, cipher2)}
    result = "".join(encrypt_map.get(char.lower(), char) if char.isalpha() else char for char in message)
    return result
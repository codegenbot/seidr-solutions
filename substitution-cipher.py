```python
def substitution_cipher(cipher1, cipher2, message):
    cipher_dict = {k.lower(): v for k, v in zip(cipher1, cipher2)}
    return "".join([cipher_dict.get(char.lower(), char) for char in message]).replace(" ", "")
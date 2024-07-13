```
def substitution_cipher(cipher1, cipher2, message):
    mapping = {cipher1[i].lower(): cipher2[i].lower() for i in range(len(cipher1))}
    deciphered_message = "".join(mapping.get(char.lower(), char) for char in message)
    return deciphered_message
```
def substitution_cipher(cipher_text1, cipher_text2, message):
    cipher = {k: v for k, v in zip(map(str.lower, cipher_text1), map(str.lower, cipher_text2))}
    deciphered_message = "".join([cipher.get(char.lower(), char) for char in message])
    return deciphered_message
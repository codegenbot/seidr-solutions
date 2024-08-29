```
def decipher_cipher(cipher_a, cipher_b, message):
    mapping = {cipher_a[i]: cipher_b[i] for i in range(min(len(cipher_a), len(cipher_b)))}
    result = ""
    for char in message:
        if char in mapping:
            result += mapping[char]
        else:
            result += char
    return result
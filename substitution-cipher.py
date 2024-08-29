```
def decipher_cipher(cipher_a, cipher_b, message):
    result = ""
    for char in message:
        if char in cipher_a:
            for i in range(len(cipher_a)):
                if cipher_a[i] == char:
                    result += cipher_b[i]
        else:
            result += char
    return result
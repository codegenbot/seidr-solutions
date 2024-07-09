```
def substitution_cipher(cipher1, cipher2, message):
    cipher_dict = {cipher1[i]: cipher2[i] for i in range(min(len(cipher1), len(cipher2)))}
    result = ""
    for char in message:
        if char in cipher_dict:
            result += cipher_dict[char]
        else:
            result += char
    return result
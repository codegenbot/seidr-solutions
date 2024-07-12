```
def substitution_cipher(s1, s2, s3):
    cipher_dict = {k: v for k, v in zip(s1, s2)}
    result = ''
    for char in s3:
        if char in cipher_dict:
            result += cipher_dict[char]
        else:
            result += char
    return result
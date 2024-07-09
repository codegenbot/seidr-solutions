```
def substitution_cipher(cipher1, cipher2, message):
    cipher_dict = {char: cipher2[i] for i, char in enumerate(cipher1)}
    result = ""
    for char in message:
        if char.isalpha():
            result += cipher_dict[char.upper()].upper() if char.isupper() else cipher_dict[char.upper()].lower()
        else:
            result += char
    return result
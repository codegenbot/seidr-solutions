```
def substitution_cipher(cipher_key1, cipher_key2, message):
    result = ""
    for char in message:
        if char.isalpha():
            if char.isupper():
                base = ord('A')
            else:
                base = ord('a')
            result += chr((ord(char) - base + (cipher_key2.index(cipher_key1[cipher_key2.index(char)]))) % 26 + base)
        else:
            result += char
    return result
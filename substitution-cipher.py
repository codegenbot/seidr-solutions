```
def substitution_cipher(cipher_key1, cipher_key2, text):
    result = ""
    for char in text:
        if char.isalpha():
            if char.isupper():
                ascii_offset = ord('A')
            else:
                ascii_offset = ord('a')
            result += chr((ord(cipher_key1[(char.ascii_uppercase) if char.isupper() else (char.lower())].ascii_uppercase) - ascii_offset) % 26 + ascii_offset)
        else:
            result += char
    return result
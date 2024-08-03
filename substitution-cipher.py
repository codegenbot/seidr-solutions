```
def substitution_cipher(cipher, text):
    result = ""
    for char in text:
        if char.isalpha():
            ascii_offset = 65 if char.isupper() else 97
            result += chr((ord(cipher[ord(char) - ascii_offset]) - ascii_offset))
        else:
            result += char
    return result

cipher1, cipher2, text = input().split()
print(substitution_cipher(cipher1, text))
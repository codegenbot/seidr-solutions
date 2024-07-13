```
def decipher_cipher(text1, text2, text3):
    cipher = {}
    for char1, char2 in zip(text1, text2):
        if char1 != char2:
            cipher[char1] = char2
    result = ""
    for char in text3:
        if char in cipher:
            result += cipher[char]
        else:
            result += char
    return result
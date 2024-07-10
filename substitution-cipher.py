```
def substitution_cipher(cipher1, cipher2, text):
    cipher = {}
    for char in range(len(cipher1)):
        cipher[cipher1[char]] = cipher2[char]
    deciphered_text = ""
    for char in text:
        if char in cipher:
            deciphered_text += cipher[char]
        else:
            deciphered_text += char
    return deciphered_text
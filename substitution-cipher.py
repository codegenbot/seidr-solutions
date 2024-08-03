```
def decipher(cipher_text1, cipher_text2, text_to_decipher):
    cipher_map = {}
    for char in range(len(cipher_text1)):
        if cipher_text1[char] == cipher_text2[char]:
            cipher_map[cipher_text1[char]] = cipher_text2[char]
    
    deciphered_text = ""
    for char in text_to_decipher:
        if char in cipher_map:
            deciphered_text += cipher_map[char]
        else:
            deciphered_text += char
    
    return deciphered_text
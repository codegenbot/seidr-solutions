```
def substitution_cipher(cipher_text1, cipher_text2, message):
    cipher_dict = {}
    for i in range(len(cipher_text1)):
        if cipher_text1[i] != cipher_text2[i]:
            cipher_dict[cipher_text1[i]] = cipher_text2[i]
    deciphered_message = ""
    for char in message:
        if char in cipher_dict:
            deciphered_message += cipher_dict[char]
        else:
            deciphered_message += char
    return deciphered_message
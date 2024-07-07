```
def substitution_cipher(cipher_text1, cipher_text2, message):
    cipher_dict = {char: text_char for char, text_char in zip(cipher_text1, cipher_text2)}
    deciphered_message = ""
    for char in message:
        if char in cipher_dict:
            deciphered_message += cipher_dict[char]
        else:
            deciphered_message += char
    return deciphered_message
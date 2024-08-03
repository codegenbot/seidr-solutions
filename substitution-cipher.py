def substitution_cipher(cipher_text1, cipher_text2, text_to_decipher):
    deciphered_text = ""
    for char in text_to_decipher:
        if char.isalpha():
            index = ord(char.upper()) - ord("A")
            deciphered_char = chr(
                ord(cipher_text1[index].upper()) + (ord(char.upper()) - ord("A")) % 26
            )
            deciphered_text += (
                deciphered_char.lower() if char.islower() else deciphered_char
            )
        else:
            deciphered_text += char
    return deciphered_text
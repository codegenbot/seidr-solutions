def substitution_cipher(cipher_text1, cipher_text2, text_to_decipher):
    deciphered_text = ""
    for char in text_to_decipher:
        index = ord(char.lower()) - ord('a')
        deciphered_text += cipher_text2[index].lower() if char.islower() else cipher_text2[index].upper()
    return deciphered_text
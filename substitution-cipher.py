def substitution_cipher(cipher_text1, cipher_text2, message):
    deciphered_message = ""
    for char in message:
        for i in range(len(cipher_text1)):
            if cipher_text1[i] == char.lower():
                if cipher_text2[i].isalpha():
                    deciphered_message += cipher_text2[i]
                else:
                    deciphered_message += char
            elif cipher_text1[i].lower() == char.lower():
                if cipher_text2[i].isalpha():
                    deciphered_message += cipher_text2[i].upper()
                else:
                    deciphered_message += char
    return deciphered_message
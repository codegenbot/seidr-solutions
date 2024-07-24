def substitution_cipher(cipher_key1, cipher_key2, message):
    deciphered_message = ""
    for char in message.lower():
        if char.isalpha():  
            index = cipher_key1.index(char)
            deciphered_message += cipher_key2[index]
        else:
            deciphered_message += char
    return deciphered_message
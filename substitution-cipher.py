def substitution_cipher(cipher_text1, cipher_text2, message):
    cipher_dict = {}
    for i in range(len(cipher_text1)):
        if cipher_text1[i] != cipher_text2[i]:
            return "Invalid cipher"

    deciphered_message = ""
    for char in message:
        if char in cipher_text1:
            index = cipher_text1.index(char)
            deciphered_message += cipher_text2[index]
        else:
            deciphered_message += char

    return deciphered_message
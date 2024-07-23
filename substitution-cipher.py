def substitution_cipher(cipher_text1, cipher_text2, text_to_decrypt):
    deciphered_text = ""
    for char in text_to_decrypt:
        if char in sorted(cipher_text1):
            index = sorted(cipher_text1).index(char)
            deciphered_text += cipher_text2[index]
        else:
            deciphered_text += char
    return deciphered_text

cipher_text1 = input("Enter the first string: ")
cipher_text2 = input("Enter the second string: ")
text_to_decrypt = input("Enter the text to decrypt: ")

decrypted_text = substitution_cipher(cipher_text1, cipher_text2, text_to_decrypt)
print(decrypted_text)
def substitution_cipher(cipher_text1, cipher_text2, text_to_decrypt):
    cipher_dict = {char: mapping_char for char, mapping_char in zip(cipher_text1, cipher_text2)}
    deciphered_text = "".join([cipher_dict.get(char, char) for char in text_to_decrypt])
    return deciphered_text

cipher_text1 = input("Enter the first string: ")
cipher_text2 = input("Enter the second string: ")
text_to_decrypt = input("Enter the text to decrypt: ")

decrypted_text = substitution_cipher(cipher_text1, cipher_text2, text_to_decrypt)
print(decrypted_text)
```
def substitution_cipher(cipher_text1, cipher_text2, text_to_decrypt):
    cipher_dict = {}
    for char in range(len(cipher_text1)):
        if cipher_text1[char] != cipher_text2[char]:
            cipher_dict[cipher_text1[char]] = cipher_text2[char]

    decrypted_text = ""
    for char in text_to_decrypt:
        if char in cipher_dict:
            decrypted_text += cipher_dict[char]
        else:
            decrypted_text += char

    return decrypted_text
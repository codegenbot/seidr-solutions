```
def substitution_cipher(cipher_dict, text_to_decrypt):
    deciphered_text = ""
    for char in text_to_decrypt:
        if char in cipher_dict:
            deciphered_text += cipher_dict[char]
        else:
            deciphered_text += char
    return deciphered_text

cipher_dict = {char: input("Enter the character substitution (e.g., A/B, D/E): ") for i, char in enumerate(input("Enter the first string of characters to substitute: ").upper())}
text_to_decrypt = input("Enter the text to decrypt: ")

decrypted_text = substitution_cipher(cipher_dict, text_to_decrypt)
print(decrypted_text)
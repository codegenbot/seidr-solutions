```
cipher_dict = {}
for i, char in enumerate(input("Enter the first string of characters to substitute: ").upper()):
    cipher_dict[char] = input(f"Enter the character substitution ({char}/): ")

def substitution_cipher(cipher_dict, text_to_decrypt):
    deciphered_text = ""
    for char in text_to_decrypt.upper():
        if char in cipher_dict:
            deciphered_text += cipher_dict[char]
        else:
            deciphered_text += char
    return deciphered_text

text_to_decrypt = input("Enter the text to decrypt: ")
decrypted_text = substitution_cipher(cipher_dict, text_to_decrypt)
print(decrypted_text)
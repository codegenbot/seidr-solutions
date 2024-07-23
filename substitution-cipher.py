```
cipher_dict = {}
for i, char in enumerate(input("Enter the first string of characters to substitute: ").upper()):
    cipher_dict[char] = input(f"Enter the character substitution ({char}/): ")

text_to_decrypt = input("Enter the text to decrypt: ")
decrypted_text = ""
for char in text_to_decrypt.upper():
    if char in cipher_dict:
        decrypted_text += cipher_dict[char]
    else:
        decrypted_text += char

print(decrypted_text)
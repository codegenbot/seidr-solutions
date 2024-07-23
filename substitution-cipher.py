```
cipher_dict = {}
n = int(input("Enter the length of the first string: "))
for i in range(n):
    char1 = input(f"Enter the character substitution ({chr(i+65)}/): ")
    if len(char1) > 0:
        cipher_dict[chr(i+65)] = char1

text_to_decrypt = input("Enter the text to decrypt: ").upper()
decrypted_text = "".join([cipher_dict.get(c, c) for c in text_to_decrypt])

print(decrypted_text)
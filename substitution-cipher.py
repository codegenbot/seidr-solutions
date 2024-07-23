```Python
cipher_dict = {}
n = int(input("Enter the length of the first string: "))
for i in range(n):
    while True:
        char1 = chr(i+65)
        char2 = input(f"Enter the character substitution ({char1}/), or press Enter to skip this character: ")
        if len(char2) > 0:
            cipher_dict[char1] = char2
            break

text_to_decrypt = input("Enter the text to decrypt: ").upper()
decrypted_text = "".join([cipher_dict.get(c, c) for c in text_to_decrypt])

print(decrypted_text)
cipher_dict = {}
for i, char1 in enumerate(input().upper()):
    char2 = input(f"Enter the character substitution ({char1}/): ")
    if len(char2) > 0 and len(cipher_dict) < len(char1):
        cipher_dict[char1] = char2

text_to_decrypt = input().upper()
decrypted_text = ""
for char in text_to_decrypt:
    decrypted_text += (cipher_dict.get(char, char))

print(decrypted_text)
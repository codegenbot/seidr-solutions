```
cipher1 = input("Enter first cipher string: ")
cipher2 = input("Enter second cipher string: ")
cipher_map = {}

for i in range(len(cipher1)):
    cipher_map[cipher1[i]] = cipher2[i]

text = input("Enter text to decipher: ")

decrypted_text = ''
for char in text:
    if char in cipher_map:
        decrypted_text += cipher_map[char]
    else:
        decrypted_text += char

print(decrypted_text)
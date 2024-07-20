```
cipher1 = input("Enter the first string: ")
cipher2 = input("Enter the second string: ")

cipher_map = {}
for i in range(len(cipher1)):
    cipher_map[cipher1[i]] = cipher2[i]

text_to_decipher = input("Enter the text to decipher: ")
deciphered_text = "".join([cipher_map.get(char, char) for char in text_to_decipher])
print(deciphered_text)
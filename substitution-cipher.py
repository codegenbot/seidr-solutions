cipher1 = input("Enter the first string: ")
cipher2 = input("Enter the second string: ")
text = input("Enter the text to decipher: ")

cipher_map = {c: d for c, d in zip(cipher1, cipher2)}
decrypted_text = ''.join([cipher_map.get(i, i) for i in text])

print(decrypted_text)
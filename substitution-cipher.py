```
cipher1 = input("Enter the first string: ")
cipher2 = input("Enter the second string: ")

cipher_map = {c: d for c, d in zip(cipher1, cipher2)}

text = input("Enter the text to be deciphered: ")

deciphered_text = "".join([cipher_map.get(c, c) for c in text])

print(deciphered_text)
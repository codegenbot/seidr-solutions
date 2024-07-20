cipher1 = input("Enter the first string: ")
cipher2 = input("Enter the second string: ")

cipher_map = {c: d for c, d in zip(cipher1, cipher2)}

deciphered_message = ''.join([cipher_map.get(c, c) for c in input("Enter the message to decipher: ")])

print(deciphered_message)
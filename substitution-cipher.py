cipher1 = input("Enter the first string: ")
cipher2 = input("Enter the second string: ")

cipher_map = {c: d for c, d in zip(cipher1, cipher2)}

deciphered_message = input("Enter the message to decipher: ")

print({v: k for k, v in cipher_map.items()}.get(''.join([cipher_map.get(char) if char in cipher_map else char for char in deciphered_message]), deciphered_message))
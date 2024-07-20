cipher1 = input("Enter first cipher string: ")
cipher2 = input("Enter second cipher string: ")

cipher_map = {}
for i in range(len(cipher1)):
    cipher_map[cipher1[i]] = cipher2[i]

message = input("Enter message to decipher: ")

deciphered_message = ""
for char in message:
    if char in cipher_map:
        deciphered_message += cipher_map[char]
    else:
        deciphered_message += char

print(deciphered_message)
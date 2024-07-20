```
cipher1 = input("Enter the first string: ")
cipher2 = input("Enter the second string (to create the cipher map): ")
input_string = input("Enter the message to decipher: ")

cipher_map = {}
for i in range(len(cipher1)):
    if cipher1[i] != cipher2[i]:
        cipher_map[cipher1[i]] = cipher2[i]

decrypted_message = ""
for char in input_string:
    decrypted_message += cipher_map.get(char, char)

print("Decrypted message:", decrypted_message)
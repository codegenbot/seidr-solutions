```
cipher1 = input("Enter the first string: ")
cipher2 = input("Enter the second string: ")
input_string = input("Enter the string to be deciphered: ")

for i in range(len(cipher1)):
    cipher_map = {cipher1[i]: cipher2[i]}

decrypted_message = ""
for char in input_string:
    if char in cipher_map:
        decrypted_message += cipher_map[char]
    else:
        decrypted_message += char

print(decrypted_message)
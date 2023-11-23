cipher = input()
mapping = input()
message = input()

deciphered_message = ""

for char in message:
    index_cipher = cipher.find(char)
    if index_cipher != -1:
        deciphered_message += mapping[index_cipher]
    else:
        deciphered_message += char

print(deciphered_message)
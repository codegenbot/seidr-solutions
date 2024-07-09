```
key1 = input("Enter the first key string: ")
key2 = input("Enter the second key string: ")

cipher_dict = {}
for char in zip(key1, key2):
    if char[0].isalpha():
        cipher_dict[char[0].lower()] = char[1]
    else:
        cipher_dict[char[0]] = char[1]

result = ""
message = input("Enter the message to decipher: ")
for char in message:
    result += cipher_dict.get(char, char)

print(result)
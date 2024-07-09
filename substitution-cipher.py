key1 = input("Enter the first key string: ")
key2 = input("Enter the second key string: ")

cipher_dict = {}
for char1, char2 in zip(key1, key2):
    cipher_dict[char1] = char2

result = ""
message = input("Enter the message to decipher: ")
for char in message:
    if char in cipher_dict:
        result += cipher_dict[char]
    else:
        result += char

print(result)
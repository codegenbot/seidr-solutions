key1 = sorted(input("Enter the first key string: ").lower())
key2 = sorted(input("Enter the second key string: ").lower())

cipher_dict = {}
for char1, char2 in zip(key1, key2):
    cipher_dict[char1] = char2

result = ""
message = input("Enter the message to decipher: ")
for char in message:
    if char.lower() in cipher_dict.values():
        for k, v in cipher_dict.items():
            if v == char.lower():
                result += k
            else:
                result += char

print(result)
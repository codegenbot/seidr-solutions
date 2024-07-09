```
cipher_dict = {}
key1, key2, message = input().split()
for char in key1:
    if char.isalpha():
        cipher_dict[char] = key2[key1.index(char)]
result = ""
for char in message:
    if char.isalpha():
        result += cipher_dict.get(char.lower(), char).upper() if char.isupper() else cipher_dict.get(char.lower(), char)
    else:
        result += char
print(result)
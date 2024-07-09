cipher_dict = {}
for char in key1:
    cipher_dict[char] = char
for char in key2:
    if char.isalpha():
        cipher_dict[char.lower()] = (
            cipher_dict.get(char.lower(), char).upper()
            if char.isupper()
            else cipher_dict.get(char.lower(), char)
        )

result = ""
message = input()
for char in message:
    if char.isalpha():
        result += (
            cipher_dict.get(char.lower(), char).upper()
            if char.isupper()
            else cipher_dict.get(char.lower(), char)
        )
    else:
        result += char
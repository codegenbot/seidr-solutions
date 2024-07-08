```
def substitution_cipher(cipher_map, message):
    cipher_dict = {}
    for i in range(0, len(cipher_map), 2):
        cipher_dict[cipher_map[i].lower()] = cipher_map[i+1]

    result = ""
    for char in message:
        if char.isalpha():
            if char.isupper():
                result += cipher_dict[char.lower()].upper()
            else:
                result += cipher_dict.get(char, char)
        else:
            result += char
    return result

cipher_map = input().strip()
message = input().strip()
print(substitution_cipher(cipher_map, message))
def substitution_cipher(cipher1, cipher2, message):
    cipher_map = cipher1 + cipher2
    result = ""
    for char in message:
        if char.isalpha():
            index = ord(char.lower()) - 97
            result += (
                cipher_map[index % len(cipher_map)].lower()
                if char.islower()
                else cipher_map[index % len(cipher_map)].upper()
            )
        else:
            result += char
    return result


cipher_map1 = input().strip()
cipher_map2 = input().strip()
message = input().strip()

print(substitution_cipher(cipher_map1, cipher_map2, message))
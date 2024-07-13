def substitution_cipher(cipher_map, message):
    result = ""
    for char in message:
        if char.isalpha():
            index = ord(char.lower()) - 97
            result += (
                cipher_map[index].lower()
                if char.islower()
                else cipher_map[index].upper()
            )
        else:
            result += char
    return result


cipher_map1 = input().strip()
cipher_map2 = input().strip()
message = input().strip()

print(substitution_cipher(cipher_map1, message))
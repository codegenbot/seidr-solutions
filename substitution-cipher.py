def substitution_cipher(cipher_map, message):
    result = ""
    for char in message:
        if char.isalpha():
            ascii_offset = 65 if char.isupper() else 97
            result += chr(
                (ord(char) - ascii_offset + cipher_map.index(char)) % 26 + ascii_offset
            )
        else:
            result += char
    return result


cipher_map1, message1 = input().split()
cipher_map2, message2 = input().split()

print(substitution_cipher(cipher_map1, message2))
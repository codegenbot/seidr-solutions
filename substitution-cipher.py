def substitution_cipher(cipher_map, message):
    deciphered_message = ""
    for char in message:
        if char.isalpha():
            index = ord(char.upper()) - 65 if char.isupper() else ord(char.lower()) - 97
            deciphered_message += (
                cipher_map[index].upper()
                if char.isupper()
                else cipher_map[index].lower()
            )
        else:
            deciphered_message += char
    return deciphered_message


cipher_map1, message = input().splitlines()
cipher_map2 = list(cipher_map1)
message = message.strip()

print(substitution_cipher(cipher_map2, message))
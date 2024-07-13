def substitution_cipher(cipher_map, message):
    deciphered_message = ""
    for char in message:
        if char.isalpha():
            if char.isupper():
                deciphered_message += chr(
                    (ord(cipher_map[0].upper().index(char)) - 65) % 26 + 65
                )
            else:
                deciphered_message += chr(
                    (ord(cipher_map[0].lower().index(char)) - 97) % 26 + 97
                )
        else:
            deciphered_message += char
    return deciphered_message


cipher_map = input().split()
message = input()

print(substitution_cipher(cipher_map, message))
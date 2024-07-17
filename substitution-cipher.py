def substitution_cipher(cipher_map, message):
    deciphered_message = "".join(
        [
            cipher_map[i] if i < len(cipher_map) else message[i]
            for i in range(len(message))
        ]
    )
    return deciphered_message


cipher_map1 = input()
cipher_map2 = input()
message = input()

print(substitution_cipher(cipher_map1, message))
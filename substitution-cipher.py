def substitution_cipher(cipher_map, message):
    deciphered_message = "".join(
        [cipher_map[i] if i < len(cipher_map) else "" for i in range(len(message))]
    )
    return deciphered_message


first_cipher_map = input()
second_cipher_map = input()
message = input()

print(substitution_cipher(first_cipher_map, second_cipher_map + message))
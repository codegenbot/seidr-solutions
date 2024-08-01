def decipher_cipher(cipher_map, message):
    return "".join(
        [cipher_map[i] if i < len(cipher_map) else "" for i in range(len(message))]
    )


# Read input from user
cipher1 = input()
cipher2 = input()
message = input()

print(decipher_cipher(cipher2, cipher1))
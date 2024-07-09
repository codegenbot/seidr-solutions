def substitution_cipher(cipher_map, message):
    return "".join(
        [
            cipher_map[i] if i < len(cipher_map) else message[i]
            for i in range(len(message))
        ]
    )


# take input from user
cipher1 = input()
cipher2 = input()
message = input()

print(substitution_cipher(cipher1, cipher2))
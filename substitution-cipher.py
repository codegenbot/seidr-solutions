def substitution_cipher(cipher, message):
    return "".join(
        [
            cipher[i % len(cipher)] if i < len(cipher) else ""
            for i in range(len(message))
        ]
    )


cipher1 = input()
cipher2 = input()
message = input()

print(substitution_cipher(cipher1 + cipher2, message))
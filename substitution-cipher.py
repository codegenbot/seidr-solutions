def substitution_cipher(cipher, message):
    deciphered = "".join(
        [cipher[i] if i < len(cipher) else "" for i in range(len(message))]
    )
    return deciphered


cipher1 = input()
cipher2 = input()
message = input()

print(substitution_cipher(cipher1, message))
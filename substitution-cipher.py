def substitution_cipher(cipher_map, message):
    return "".join(
        [
            cipher_map[message[i]] if i < len(message) else ""
            for i in range(len(message))
        ]
    )


# Read input from user
cipher1 = input()
cipher2 = input()
message = input()

# Apply cipher to the message and print the result
print(substitution_cipher(cipher2, cipher1) + substitution_cipher(cipher2, message))
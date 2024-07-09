def substitution_cipher(cipher_map, message):
    return "".join(
        [cipher_map[i] if i < len(cipher_map) else "" for i in range(len(message))]
    )


# Read input from user
cipher1 = input()
cipher2 = input()
message = input()

# Apply cipher to the message and print the result
print(substitution_cipher(cipher1, message))
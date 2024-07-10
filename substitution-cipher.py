def substitution_cipher():
    cipher_map = [
        str(i)
        for i in range(
            ord(input("Enter first string: ")), ord(input("Enter second string: ")) + 1
        )
    ]
    message = input("Enter third string: ")
    deciphered_message = "".join(
        [cipher_map[ord(c) - ord("a")] if c.isalpha() else c for c in message.lower()]
    )
    print(deciphered_message)


substitution_cipher()
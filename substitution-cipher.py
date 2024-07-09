def substitution_cipher():
    cipher_text = input()
    decipher_map = list(input())
    message = input()

    result = "".join(
        [decipher_map[ord(char) - 97] if char.isalpha() else char for char in message]
    )

    return result
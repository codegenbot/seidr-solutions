def substitution_cipher():
    cipher_text = input().strip()
    key = input().strip()
    message = input().strip()

    deciphered_message = ""
    for char in message:
        index = ord(char) - ord("a")
        if index < 0 or index > 25:
            deciphered_message += char
        else:
            deciphered_message += key[index]

    return deciphered_message


print(substitution_cipher())
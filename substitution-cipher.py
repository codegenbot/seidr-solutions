def substitution_cipher():
    cipher_map = str(input())
    message = str(input())
    deciphered_message = ""

    for char in message:
        if char in cipher_map:
            index = cipher_map.index(char)
            deciphered_message += cipher_map[index - 1]
        else:
            deciphered_message += char

    return deciphered_message


print(substitution_cipher())
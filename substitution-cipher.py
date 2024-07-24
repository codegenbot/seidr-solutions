def substitution_cipher():
    cipher_key = input()
    message_to_decrypt = input()
    deciphered_message = ""

    for char in message_to_decrypt:
        if char in cipher_key:
            index = cipher_key.index(char)
            deciphered_message += cipher_key[index]
        else:
            deciphered_message += char

    return deciphered_message


print(substitution_cipher())
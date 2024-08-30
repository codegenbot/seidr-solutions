```Python
def substitution_cipher():
    cipher1 = input()
    cipher2 = input()
    message = input()

    cipher_dict = {}
    for i in range(len(cipher1)):
        if cipher1[i] not in cipher_dict:
            cipher_dict[cipher1[i]] = cipher2[i]

    deciphered_message = ""
    for char in message:
        deciphered_message += cipher_dict.get(char, char)

    return deciphered_message
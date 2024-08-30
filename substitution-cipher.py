def substitution_cipher():
    cipher1 = input()
    cipher2 = input()
    message = input()

    mapping = {char: cipher2[i] for i, char in enumerate(cipher1)}
    deciphered_message = "".join([mapping.get(char, char) for char in message])

    return deciphered_message
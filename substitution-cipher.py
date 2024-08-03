def substitution_cipher():
    cipher_map = list(input())
    message = input()
    deciphered_message = "".join([char for char in message if char in cipher_map])

    return deciphered_message
def substitution_cipher():
    cipher_map = [c1 for c1, c2 in zip(input(), input())]
    message = input()
    deciphered_message = "".join([c if c in cipher_map else "" for c in message])
    return deciphered_message
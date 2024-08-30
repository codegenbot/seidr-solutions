def substitution_cipher():
    cipher_map = [c for c1, c2 in zip(input(), input())]
    message = input()
    return "".join([c if c in cipher_map else "?" for c in message])
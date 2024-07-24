def substitution_cipher():
    cipher1 = input()
    cipher2 = input()
    message = input()

    result = "".join([c if c in cipher1 else c for c in message])

    return result
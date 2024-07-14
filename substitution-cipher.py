def substitution_cipher():
    cipher = [line.strip() for line in sys.stdin.readlines()]
    if len(cipher) != 3:
        return None

    deciphered_message = "".join([c for c in cipher[2] if c in cipher[0]])

    return deciphered_message
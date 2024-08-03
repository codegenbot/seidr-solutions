def substitution_cipher(*args):
    cipher = [c1 for c1, c2 in zip(args[0], args[1]) if c1 != c2]
    return "".join([c for c in args[2] if c in cipher])
def substitution_cipher(*args):
    cipher = {k: v for k, v in zip(args[0], args[1])}
    return "".join([cipher.get(char, char) for char in args[2]])
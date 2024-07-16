def substitution_cipher(cipher1, cipher2, message):
    mapping = {
        c1: c2
        for c1, c2 in zip(cipher1.lower(), cipher2.lower())
    }
    result = "".join(
        (mapping.get(char) or char)
        for char in message.lower()
    )
def substitution_cipher(cipher1, cipher2, message):
    mapping = {}
    for char1, char2 in zip(cipher1, cipher2):
        if char1 not in mapping:
            mapping[char1] = char2
    return "".join(mapping.get(char, char) for char in message)
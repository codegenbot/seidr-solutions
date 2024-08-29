def substitution_cipher(string1, string2, string3):
    mapping = {}
    for char1, char2 in zip(string1, string2):
        if char1 not in mapping:
            mapping[char1] = char2
    return "".join(mapping.get(char, char) for char in string3)
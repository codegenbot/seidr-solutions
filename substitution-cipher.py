```
def substitution_cipher(cipher1, cipher2, message):
    upper_mapping = {c1.upper(): c2.upper() for c1, c2 in zip(cipher1, cipher2) if c1.isalpha() and c2.isalpha()}
    lower_mapping = {c1.lower(): c2.lower() for c1, c2 in zip(cipher1, cipher2) if c1.isalpha() and c2.isalpha()}
    mapping = {**{k: v for k, v in upper_mapping.items()}, **{k: v for k, v in lower_mapping.items()}}
    result = ''.join(mapping.get(char.upper(), char).upper() if char.isalpha() else char for char in message)
    return result
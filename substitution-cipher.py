def substitution_cipher(cipher1, cipher2, message):
    mapping = {c2: c for c1, c2 in zip(cipher1.lower(), cipher2.lower()) if c1.isalpha() and c2.isalpha()}
    result = "".join(
        (mapping.get(char) or char).upper() if char.isalpha() and char.isupper() else
        (mapping.get(char) or char).lower() if char.isalpha() and char.islower() else char for char in message)
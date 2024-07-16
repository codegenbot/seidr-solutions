def substitution_cipher(cipher1, cipher2, message):
    lowercase_mapping = {c2.lower(): c1.lower() for c1, c2 in zip(cipher1, cipher2)}
    uppercase_mapping = {c2.upper(): c1.upper() for c1, c2 in zip(cipher1, cipher2)}
    mapping = {k: v if k.isalpha() else k 
               for k, v in chain.from_iterable((lowercase_mapping.items(), uppercase_mapping.items()))}
    result = ''.join(mapping.get(char.lower(), char).upper() if char.isalpha() else char for char in message)
    return result
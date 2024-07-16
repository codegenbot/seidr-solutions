def substitution_cipher(cipher1, cipher2, message):
    mapping = {}
    for c1, c2 in zip(cipher1.lower(), cipher2.lower()):
        if c2.isalpha():
            mapping[c2] = c1
            mapping[c2.upper()] = c1.upper()
    
    result = "".join(mapping.get(char).upper() if char.isalpha() and char.isupper() else 
                      (mapping.get(char).lower() if char.isalpha() and char.islower() else char) for char in message)
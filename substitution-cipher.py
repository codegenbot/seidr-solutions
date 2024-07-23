def substitution_cipher(cipher1, cipher2, message):
    cipher_lower = {k.lower(): v for k, v in zip(cipher1, cipher2)}
    return "".join([cipher_lower.get(char.lower(), char).upper() if not char.isalnum() else 
                    (cipher_lower.get(char.lower(), char) if char.islower() else cipher_lower.get(char.upper(), char)) 
                    for char in message])
def substitution_cipher(cipher1, cipher2, message):
    mapping = {k: v.lower() if k.islower() else v.upper() for k, v in zip(cipher1.lower(), cipher2.lower())}
    
    result = "".join(mapping.get(char) if char.isalpha() else char for char in message)
    
    return result
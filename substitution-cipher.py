def substitution_cipher(cipher1, cipher2, message):
    mapping = {c.lower(): c2 for c, c2 in zip(cipher1, cipher2)}
    
    result = ""
    for char in message:
        if char.lower() in mapping:
            result += mapping[char.lower()]
        else:
            result += char
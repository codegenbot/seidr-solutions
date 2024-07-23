def substitution_cipher(cipher1, cipher2, message): 
    cipher = dict(zip(cipher1.lower(), cipher2.lower()))
    return "".join([cipher.get(char.lower(), char) for char in message.lower()])
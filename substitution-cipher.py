```
def substitution_cipher(cipher1, cipher2, message):
    cipher = {k: v for k, v in zip(cipher1, cipher2)}
    return "".join([cipher.get(char.lower(), char).upper() if char.isalpha() else char 
                    for char in message])
def substitution_cipher(cipher1, cipher2, message):
    encode = {a: b for a, b in zip(cipher1, cipher2)}
    decode = {v: k for k, v in encode.items()}
    deciphered_message = "".join([decode.get(char.upper(), char).upper() for char in message])
    return deciphered_message
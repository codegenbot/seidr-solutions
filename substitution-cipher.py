def decipher_message(cipher1, cipher2, message):
    encrypt_map = {c+d: k+v for c,d,k,v in zip(cipher1, cipher2, cipher1,cipher2)}
    
    result = "".join(encrypt_map.get(message[i:i+2], message[i:i+2]) for i in range(0, len(message), 2))
    return result
def substitution_cipher(cipher1, cipher2, message):
    cipher_map = str.maketrans({c.lower(): d.lower() for c, d in zip(cipher1, cipher2)} 
                              + {c.upper(): d.upper() for c, d in zip(cipher1, cipher2)}
                              + {(c := x[0]).lower(): (d := x[1]).lower() for x in zip(cipher1, cipher2)} 
                              + {(c := x[0]).upper(): (d := x[1]).upper() for x in zip(cipher1, cipher2)})
    return message.translate(cipher_map)
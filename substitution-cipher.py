def substitution_cipher():
    cipher_map = []
    for c1, c2 in zip(input().strip(), input().strip()):
        cipher_map.append(c2)
    
    message = input().strip()
    return "".join([c for c in message if c in cipher_map])
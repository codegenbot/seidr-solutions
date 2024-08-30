def substitution_cipher():
    cipher_map = {}
    c1, c2 = input(), input()
    for i in range(min(len(c1), len(c2))):
        if c1[i].isalpha() and c2[i].isalpha():
            cipher_map[c1[i]] = c2[i]
    
    message = input()
    return "".join([cipher_map.get(c.lower()) or c for c in message])
def substitute_cipher():
    cipher_map = [c for c in input().replace("\n", "")]
    text = input().replace("\n", "")
    deciphered_text = "".join([cipher_map[int(i)] for i in text])
    return deciphered_text
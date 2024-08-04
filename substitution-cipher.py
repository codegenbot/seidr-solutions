```
def substitution_cipher(cipher_map, message):
    return "".join([cipher_map[i] if i < len(cipher_map) else "" for i in range(len(message))])

# test cases
print(substitution_cipher("a", "a", "a"))  # a
print(substitution_cipher("j", "h", "jhjj"))  # hh
print(substitution_cipher("a", "z", "aza"))   # zzz
print(substitution_cipher("e", "l", "eeeeeeeeee"))  # llllllllll
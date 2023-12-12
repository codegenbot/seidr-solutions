def decode_message(cipher_key, cipher_text):
    deciphered_message = ""
    for i in range(len(cipher_text)):
        deciphered_message += chr(ord(cipher_text[i]) - ord(cipher_key[i]))
    return deciphered_message

# Test cases
print(decode_message("a", "a")) # a
print(decode_message("j", "h")) # h
print(decode_message("a", "z")) # z
print(decode_message("e", "l")) # lllllllllll
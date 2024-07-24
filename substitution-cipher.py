cipher = input()
plain = input()
message = input()

cipher_mapping = dict(zip(cipher, plain))
deciphered_message = "".join(cipher_mapping.get(char, char) for char in message)

print(deciphered_message)
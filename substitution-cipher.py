cipher = input()
plain = input()
message = input()

cipher_map = dict(zip(cipher, plain)

deciphered_message = "".join(cipher_map.get(char, char) for char in message)

print(deciphered_message)
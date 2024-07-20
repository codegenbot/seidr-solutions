```
cipher_map = {c: d for c, d in zip(input(), input())}
decrypted_message = ''.join([cipher_map.get(char, char) for char in input()])
print(decrypted_message)
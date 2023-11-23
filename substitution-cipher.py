cipher = input()
mapping = input()
message = input()

deciphered_message = ""

char_map = dict(zip(cipher, mapping))

for char in message:
    deciphered_message += char_map.get(char, char)

print(deciphered_message)
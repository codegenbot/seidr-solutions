cipher = input()
mapping = input()
message = input()

mapping_dict = {value: key for key, value in zip(cipher, mapping)}
deciphered_message = "".join(mapping_dict.get(char, char) for char in message)

print(deciphered_message)
cipher = input()
mapping = input()
message = input()

mapping_dict = {cipher[i]: mapping[i] for i in range(len(cipher))}
deciphered_message = "".join(mapping_dict.get(char, char) for char in message)

print(deciphered_message)
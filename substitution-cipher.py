cipher = input()
mapping = input()
message = input()
decipher_dict = {c: mapping[i] for i, c in enumerate(cipher)}
deciphered_message = "".join(decipher_dict.get(char, char) for char in message)
print(deciphered_message)
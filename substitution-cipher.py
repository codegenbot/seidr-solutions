cipher = input()
mapping = input()
message = input()

cipher_mapping = {cipher[i]: mapping[i] for i in range(len(cipher))}
deciphered_message = ''.join(cipher_mapping.get(char, char) for char in message)

print(deciphered_message)
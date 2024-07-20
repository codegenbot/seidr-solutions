```python
cipher_map = { }
for i in range(len(cipher1)):
    cipher_map[cipher1[i]] = cipher2[i]
deciphered_message = "".join([cipher_map.get(char,char) for char in message])
print(deciphered_message)
```python
cipher_map = {c: d for c, d in zip(cipher1, cipher2)}
decrypted_message = ''.join([cipher_map[char] if char in cipher_map else char for char in message])
print(decrypted_message)
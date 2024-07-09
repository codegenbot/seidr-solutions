```python
key1 = input("Enter the first key string: ")
key2 = input("Enter the second key string: ")

key1 = key1.lower()
key2 = key2.lower()

cipher_dict = {c: k for c, k in zip(key1, key2)}
result = ""
message = input("Enter the message to decipher: ")
for char in message:
    if char.isalpha():  
        result += cipher_dict.get(char.lower(), char)  
    else:
        result += char

print(result)
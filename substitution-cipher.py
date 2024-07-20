```
cipher1, cipher2, text_to_decipher = input().split(), input().split()[0], input()
cipher_map = {}
for i in range(len(cipher1)):
    cipher_map[cipher1[i]] = cipher2[i]
result = ''.join([cipher_map.get(c, c) for c in text_to_decipher])
print(result)
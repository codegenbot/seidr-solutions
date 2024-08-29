```python
s1, s2, s3 = [line.strip() for line in input().split("\n\n")]
cipher_map = [chr(ord(s1[i]) - ord(s1[0]) + ord(s2[i])) for i in range(len(s1))]
print("".join([cipher_map.index(c) < len(s1) and cipher_map[cipher_map.index(c)] or c for c in s3]))
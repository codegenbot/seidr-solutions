```
s1 = next(sys.stdin).strip()
s2 = next(sys.stdin).strip()
s3 = next(sys.stdin).strip()
cipher_map = [chr(ord(s1[i]) - ord(s1[0]) + ord(s2[i])) for i in range(len(s1))]
print("".join([cipher_map[ord(c) - ord('a')] if c.isalpha() else c for c in s3]).encode().decode())
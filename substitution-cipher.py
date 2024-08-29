s1, s2, s3 = [line.strip() for line in input().split("\n\n")]
def substitution_cipher():
    cipher_map = [chr(ord(s1[i]) - ord(s1[0]) + ord(s2[i])) for i in range(len(s1))]
    return "".join([cipher_map[c.index(c)] if c in s1 else c for c in s3])
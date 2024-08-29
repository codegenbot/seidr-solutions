def substitution_cipher():
    cipher_map = [chr(ord(s1[i]) - ord(s1[0]) + ord(s2[i])) for i in range(len(s1))]
    return "".join(
        [
            cipher_map.index(c) < len(s1) and cipher_map[cipher_map.index(c)] or c
            for c in s3
        ]
    )


s1, s2, s3 = input().strip().split("\n")
print(substitution_cipher())
def cipher(s1, s2):
    result = ""
    for c in s1:
        if c in s2:
            index = s2.index(c)
            result += s1[index]
        else:
            result += c
    return result


# get input from user
s1 = input()
s2 = input()
message = input()

print(cipher(s1, s2))
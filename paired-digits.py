```
def paired_digits(s):
    s = str(s)  
    total = 0
    i = 0
    while i < len(s) - 1:
        j = i + 1
        while j < len(s) and s[i] == s[j]:
            j += 1
        if j > i: 
            total += int(s[i]) * (j - i)
        i = j
    return total

s = input("Enter a string of digits: ")
print(paired_digits(s))
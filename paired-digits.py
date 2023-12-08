def paired_digits(s):
    return sum(int(s[i]) for i in range(len(s)-1) if s[i] == s[i+1])

# Test the function
print(paired_digits("122345566778888"))
print(paired_digits("1112233"))
print(paired_digits("223344"))
print(paired_digits("1223455556"))
print(paired_digits(""))
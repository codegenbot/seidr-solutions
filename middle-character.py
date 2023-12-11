def get_middle(s):
    if len(s) % 2 == 0:
        return s[len(s)//2-1:len(s)//2+1]
    else:
        return s[len(s)//2]

# Test cases
print(get_middle("Q")) # Q
print(get_middle("")) # 
print(get_middle("$")) # $
print(get_middle("E9")) # E9
print(get_middle(")b")) # )b
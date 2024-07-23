```
def solve_boolean(expression):
    tokens = []
    temp = ""
    for char in expression:
        if char in "&|":
            if temp:
                tokens.append(temp)
                temp = ""
            tokens.append(char)
        else:
            temp += char
    if temp:
        tokens.append(temp)
    
    result = eval(" ".join(map(str, tokens)))
    return bool(result)
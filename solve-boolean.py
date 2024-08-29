```
def solve(input):
    result = True
    i = 0
    while i < len(input):
        if input[i] == '&':
            result &= bool(input[i+1]) == True
            i += 2
        elif input[i] == '|':
            result |= bool(input[i+1]) == True
            i += 2
        else:
            result = bool(input[i]) == True
            i += 1
    return result
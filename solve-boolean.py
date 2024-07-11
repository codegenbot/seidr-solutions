```
def solveBoolean(input_str):
    if input_str == 'T':
        return True
    elif input_str == 'F':
        return False
    elif '&' in input_str and '|' in input_str:
        raise ValueError("Invalid expression")
    else:
        result = True
        for char in input_str:
            if char == '&':
                result = result and (input_str[input_str.index(char)+1] == 'T')
            elif char == '|':
                result = result or (input_str[input_str.index(char)+1] == 'T')
        return result
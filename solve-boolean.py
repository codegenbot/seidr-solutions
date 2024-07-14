```
def solve_boolean(expression):
    if expression == "T":
        return True
    elif expression == "F":
        return False
    result = True
    operator = None
    for char in expression:
        if char in "&|":
            operator = char
        else:
            value = (char == "T")
            if operator == "&":
                result = result and value
            elif operator == "|":
                result = result or value
            operator = None
    return result
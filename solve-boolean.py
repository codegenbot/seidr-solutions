```
def solve_boolean(expression):
    if expression == "T":
        return True
    elif expression == "F":
        return False
    ops = {"&": lambda a, b: a and b, "|": lambda a, b: a or b}
    stack = []
    temp = ""
    for char in expression:
        if char in ops:
            stack.append((ops[char], int(temp) if temp else None))
            temp = ""
        elif char == "T":
            temp += str(1)
        elif char == "F":
            temp += str(0)
    stack.append((None, int(temp)))
    
    result = stack[0][1]
    for op, value in stack[1:]:
        if value is not None:
            if op == "&":
                result &= value
            else:
                result |= value
    
    return result
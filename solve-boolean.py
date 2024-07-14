def solve_boolean(expression):
    ops = []
    values = []
    for char in expression + "|":  
        if char in {"T", "F"}:
            values.append(char == "T")
        elif char == "|":
            b1 = values.pop()
            b2 = values.pop()
            ops.pop()  
            stack.append(b1 or b2)
        elif char == "&":
            ops.append("|")
        else:  
            while len(ops) > 0 and ops[-1] == "|":  
                ops.pop()
            ops.append("&")
    return values[0]
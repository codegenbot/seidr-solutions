def solve_boolean(expression):
    if expression == "T":
        return True
    elif expression == "F":
        return False
    else:
        for op in "|&":
            parts = expression.split(op)
            left = parts[0]
            right = parts[1]
            if op == "|":
                result = solve_boolean(left) or solve_boolean(right)
            else:
                result = solve_boolean(left) and solve_boolean(right)
            if not result:  
                break
        return result
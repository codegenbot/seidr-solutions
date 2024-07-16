def solve_boolean(expression):
    if not expression: 
        return False
    
    for char in expression:
        if char == 'T':
            continue
        elif char == "&":
            if solve_boolean(expression[:expression.index(char)]) and solve_boolean(expression[expression.index(char) + 1:]):
                return True
            else:
                return False
        elif char == "|":
            if solve_boolean(expression[:expression.index(char)]):
                return True
            elif solve_boolean(expression[expression.index(char) + 1:]):
                return True
            else:
                continue
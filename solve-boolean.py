def solve_boolean(expression):
    if not expression:
        return False
    
    if expression[0] == 'T':
        return True
    elif expression[0] == '&':
        result = (expression[1] != '&' and solve_boolean(expression[2:])) and solve_boolean(expression[3:])
        return result
    elif expression[0] == '|':
        return solve_boolean(expression[1:]) or ((expression[1] == '|' or expression[1] == '&') and solve_boolean(expression[2:]))
    else:
        return False
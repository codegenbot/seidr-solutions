```
def solve_boolean(expression):
    if expression == "T":
        return True
    elif expression == "F":
        return False
    elif "&" in expression:
        left, right = expression.split("&")
        return solve_boolean(left) and solve_boolean(right)
    elif "|":
        left, right = expression.split("|", 1)
        if "&" in left:
            left = '(' + solve_boolean(left) + ')'
        if "&" in right:
            right = '(' + solve_boolean(right) + ')'
        return eval('(' + str(solve_boolean(left)) + ' & ' + str(solve_boolean(right)) + ')')
    elif "|":
        left, right = expression.split("|", 1)
        if "&" in left:
            left = '(' + solve_boolean(left) + ')'
        if "&" in right:
            right = '(' + solve_boolean(right) + ')'
        return eval('(' + str(solve_boolean(left)) + ' | ' + str(solve_boolean(right)) + ')')
    else:
        if not expression.strip():  
            return False  
        raise ValueError("Invalid input")
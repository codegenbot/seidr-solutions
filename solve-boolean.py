```
def solve_boolean(expression):
    if "&" not in expression and "|" not in expression:
        return eval(expression)
    
    start = 0
    end = len(expression) - 1
    
    while end > start and expression[end] not in "&|":
        end -= 1
    
    if "(&" in expression[:end+1]:
        return solve_boolean("(" + expression[:end+1])
    elif "(|" in expression[:end+1]:
        return solve_boolean("(" + expression[:end+1])

    return solve_boolean(expression[:start+1]) and solve_boolean(expression[start+2:end])
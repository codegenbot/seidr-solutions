```
def solve_boolean(expression):
    result = True if expression == 't' else False
    
    for char in expression[1:]:
        if char in ['|', '&']:
            left, right = expression[:expression.index(char)], expression[expression.index(char)+1:]
            result = (result and eval(left + char + right)) if char == '&' else (result or eval(left + char + right))
    
    return result
```
def solve_boolean(expression):
    expression = expression.replace("&|", "&&").replace("|&", "| ")

    if expression == "F":
        return False
    elif expression == "T":
        return True
    
    operators = "&|"
    result = None
    while operators in expression:
        for operator in operators:
            left, right = expression.split(operator)
            if left == "T" or left == "t":
                left = True
            elif left == "F" or left == "f":
                left = False
            else:
                left = eval(left)

            if right == "T" or right == "t":
                right = True
            elif right == "F" or right == "f":
                right = False
            else:
                right = eval(right)
            
            if left and operator == "&":
                expression = str(right)
                break
            elif not left and operator == "|":
                expression = str(right)
                break
            elif left and operator == "|":
                expression = str(right)
                break
            elif not left and operator == "&":
                expression = str(right)
                break
        if not result and eval(expression):
            result = True
        elif result is None and not eval(expression):
            result = False
        break
    
    return result if result is not None else eval(expression)

print(solve_boolean("f|f&t|t&t|t&t&f&t&t|t&t&t&f|f"))
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
            if eval(f"({left})"):
                expression = right
                break
            else:
                expression = right
                continue
        if not result and eval(expression):
            result = True
        elif result is None and not eval(expression):
            result = False
        break
    
    return result if result is not None else eval(expression)

print(solve_boolean("f|f&t|t&t|t&t&f&t&t|t&t&t&f|f"))
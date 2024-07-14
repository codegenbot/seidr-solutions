```
def solve_boolean(expression):
    expression = expression.replace("&|", "&&").replace("|&", "| ")

    if expression == "F":
        return False
    elif expression == "T":
        return True
    
    while "&|" in expression:
        expression = expression.replace("T&T", "True")
        expression = expression.replace("t&t", "True")
        expression = expression.replace("F&F", "False")
        expression = expression.replace("f&f", "False")
        expression = expression.replace("|T", "| True")
        expression = expression.replace("|t", "| True")
        expression = expression.replace("|F", "| False")
        expression = expression.replace("|f", "| False")
        expression = expression.replace("&T", "& True")
        expression = expression.replace("&t", "& True")
        expression = expression.replace("&F", "& False")
        expression = expression.replace("&f", "& False")
        expression = expression.replace("T|", "True | ")
        expression = expression.replace("t|", "True | ")
        expression = expression.replace("F|", "False | ")
        expression = expression.replace("f|", "False | ")

    if "&" in expression:
        left, right = expression.split("&")
        return eval(left) and eval(right)
    elif "|" in expression:
        left, right = expression.split("|")
        return eval(left) or eval(right)

    return eval(expression)

print(solve_boolean("f|f&t|t&t|t&t&f&t&t|t&t&t&f|f"))
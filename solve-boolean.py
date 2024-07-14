def solve_boolean(expression):
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

    while '&&' in expression:
        expression = expression.replace('T&T', '(True and True)')
        expression = expression.replace('t&t', '(True and True)')
        expression = expression.replace('F&F', '(False and False)')
        expression = expression.replace('f&f', '(False and False)')
        expression = expression.replace('&T', '(True and ')
        expression = expression.replace('&t', '(True and ')
        expression = expression.replace('&F', '(False and ')
        expression = expression.replace('&f', '(False and ')

    while '||' in expression:
        expression = expression.replace('T|', '(True or ')
        expression = expression.replace('t|', '(True or ')
        expression = expression.replace('F|', '(False or ')
        expression = expression.replace('f|', '(False or ')

    if expression == "F":
        return False
    elif expression == "T":
        return True

    while ' | ' in expression:
        left, right = expression.split(" | ")
        if eval(left):
            expression = str(right)
        else:
            expression = "False"

    while ' and ' in expression:
        left, right = expression.split(' and ')
        if eval(left):
            expression = str(right)
        else:
            expression = "False"

    return eval(expression)
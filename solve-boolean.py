```
def solve_boolean(expression):
    while "(" in expression:
        start = expression.index("(")
        end = expression.index(")")
        expression = str(solve_boolean(expression[:start] + " ")) + "( " + expression[start+1:end+1].strip() + " ) " + expression[end+2:]
    return boolean_expression_to_result(eval(precedence_based_parsing(expression)))

def precedence_based_parsing(expression):
    while "&" in expression and "|" in expression:
        left, right = expression.split("&", 1)
        expression = str(boolean_expression_to_result(left)) + "&"
        left, right = right.rsplit("|", 1)
        return left + " & " + str(boolean_expression_to_result(right))
    if "&" in expression:
        return expression.replace("&", " and ")
    if "|" in expression:
        return expression.replace("|", " or ")

def boolean_expression_to_result(expression):
    if expression == "T":
        return True
    elif expression == "F":
        return False
    else:
        return eval(expression)
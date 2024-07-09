```
def solve_boolean(expression):
    while "&" in expression:
        parts = expression.split("&")
        new_expression = eval(f"{parts[0]} and {parts[1]}")
        expression = str(new_expression)
    return eval(expression)
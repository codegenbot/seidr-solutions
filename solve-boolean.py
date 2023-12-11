def solve_boolean(expression):
    # Convert the expression to a Python boolean expression
    python_expression = expression.replace("T", "True").replace("F", "False")
    
    # Evaluate the Python boolean expression using eval()
    result = eval(python_expression)
    
    return result
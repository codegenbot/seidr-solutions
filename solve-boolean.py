def evaluate_expression(expression):
    # Replace all occurrences of "T" with "True" and "F" with "False"
    expression = expression.replace("T", "True").replace("F", "False")
    
    # Evaluate the expression using Python's eval() function
    result = eval(expression)
    
    return result
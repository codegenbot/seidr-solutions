def solve(expression):
    # Split the expression into a list of tokens
    tokens = expression.split()
    
    # Initialize the result to False
    result = False
    
    # Iterate over the tokens and evaluate them
    for token in tokens:
        if token == 't':
            result = True
        elif token == 'f':
            result = False
        elif token == '|':
            result = result or True
        elif token == '&':
            result = result and True
    
    # Return the resulting Boolean value
    return result
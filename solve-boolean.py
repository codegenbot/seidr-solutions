def solve_boolean(expression):
    # Initialize result to False
    result = False
    
    # Iterate over each character in the expression
    for char in expression:
        # If the current character is 'T', set result to True
        if char == 'T':
            result = True
        # If the current character is 'F', set result to False
        elif char == 'F':
            result = False
        # If the current character is '|', perform a logical OR operation
        elif char == '|':
            result = result or False
        # If the current character is '&', perform a logical AND operation
        elif char == '&':
            result = result and False
    
    return result
```
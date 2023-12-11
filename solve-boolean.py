def solve_boolean(expression):
    # Use a dictionary to map each character to its corresponding boolean value
    values = {"T": True, "F": False}
    # Initialize the result to True
    result = True
    # Iterate over each character in the expression
    for char in expression:
        # If the character is '&', update the result as a logical AND
        if char == "&":
            result &= values[expression[0]] and values[expression[2]]
        # If the character is '|', update the result as a logical OR
        elif char == "|":
            result |= values[expression[0]] or values[expression[2]]
    return result
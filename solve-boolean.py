def solve_boolean(expression):
    # Initialize a dictionary to map each character to its corresponding boolean value
    char_to_bool = {"T": True, "F": False}
    
    # Split the expression into a list of individual characters
    chars = list(expression)
    
    # Iterate over the list and evaluate the expression
    result = True
    for char in chars:
        if char == "&":
            result &= char_to_bool[chars[0]] and char_to_bool[chars[1]]
        elif char == "|":
            result |= char_to_bool[chars[0]] or char_to_bool[chars[1]]
    
    return result
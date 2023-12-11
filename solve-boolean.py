def solve_boolean(expression):
    # Initialize a dictionary to map each character to its corresponding boolean value
    char_to_bool = {"T": True, "F": False}
    
    # Split the expression into individual characters
    chars = list(expression)
    
    # Iterate over the characters and evaluate the boolean expression
    result = None
    for i in range(len(chars)):
        char = chars[i]
        if char == "&":
            # If the current character is &, we need to evaluate the previous two characters
            if result is None:
                # If this is the first iteration, set the result to True
                result = True
            else:
                # If this is not the first iteration, update the result based on the previous two characters
                result = result and char_to_bool[chars[i-1]]
        elif char == "|":
            # If the current character is |, we need to evaluate the previous two characters
            if result is None:
                # If this is the first iteration, set the result to False
                result = False
            else:
                # If this is not the first iteration, update the result based on the previous two characters
                result = result or char_to_bool[chars[i-1]]
        else:
            # If the current character is not & or |, we just need to evaluate it directly
            result = char_to_bool[char]
    
    return result
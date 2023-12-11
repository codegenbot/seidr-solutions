def solve_boolean(expression):
    """
    Given a string representing a Boolean expression consisting of T, F, |, and &, evaluate it and return the resulting Boolean.
    """
    # Use a dictionary to map strings to their corresponding boolean values
    mapping = {"T": True, "F": False}

    # Split the input string into a list of substrings
    tokens = expression.split(" ")

    # Initialize a stack to hold the intermediate results
    stack = []

    # Iterate over the substrings and perform the operations
    for token in tokens:
        if token == "T" or token == "F":
            # Push the corresponding boolean value onto the stack
            stack.append(mapping[token])
        elif token == "|":
            # Pop the top two elements from the stack, perform a logical OR operation and push the result back onto the stack
            b1 = stack.pop()
            b2 = stack.pop()
            stack.append(b1 or b2)
        elif token == "&":
            # Pop the top two elements from the stack, perform a logical AND operation and push the result back onto the stack
            b1 = stack.pop()
            b2 = stack.pop()
            stack.append(b1 and b2)

    # Return the final result from the stack
    return stack[-1]
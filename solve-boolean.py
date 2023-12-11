def solve_boolean(expression):
    # Initialize a dictionary to store the Boolean values of each character in the expression
    boolean_values = {"T": True, "F": False}
    
    # Split the expression into a list of subexpressions separated by the | and & operators
    subexpressions = re.split(r"[|&]", expression)
    
    # Evaluate each subexpression and store the result in a list
    results = []
    for subexpression in subexpressions:
        # Check if the subexpression is a single character
        if len(subexpression) == 1:
            # If it is, return its Boolean value from the dictionary
            results.append(boolean_values[subexpression])
        else:
            # If it is not, evaluate the subexpression recursively
            result = solve_boolean(subexpression)
            results.append(result)
    
    # Combine the results of all subexpressions using the | and & operators
    final_result = None
    for i in range(len(results)):
        if i == 0:
            final_result = results[i]
        else:
            if expression[i - 1] == "|":
                final_result = final_result or results[i]
            elif expression[i - 1] == "&":
                final_result = final_result and results[i]
    
    return final_result

def solve_boolean(expression):
    if isinstance(expression, str):
        # Split the expression into individual operators
        operators = re.split("(\\||&)", expression)

        # Initialize the result as True
        result = True

        # Iterate over each operator and apply the correct logical operation
        for i in range(len(operators)):
            if operators[i] == "t":
                result &= True
            elif operators[i] == "f":
                result &= False
            else:
                raise ValueError("Invalid input")

        return result
    elif isinstance(expression, list):
        # Iterate over each element in the list and solve the Boolean expression for each one
        for exp in expression:
            solve_boolean(exp)
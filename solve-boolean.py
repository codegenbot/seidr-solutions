
import re
def solve_boolean(expression):
    # Remove any whitespace from the expression
    expression = expression.replace(" ", "")
    
    # Split the expression into a list of subexpressions using & and | as delimiters
    subexpressions = re.split(r"(&|\|)", expression)
    
    # Evaluate each subexpression and return the resulting Boolean
    result = True
    for subexpression in subexpressions:
        if subexpression == "T":
            result &= True
        elif subexpression == "F":
            result &= False
        else:
            raise ValueError("Invalid subexpression")
    
    return result

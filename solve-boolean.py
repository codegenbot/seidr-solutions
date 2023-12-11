import re

def solve_boolean(expression):
    # Remove spaces from expression
    expression = expression.replace(" ", "")
    
    # Evaluate the expression using regex
    result = bool(re.search(r"^(?:t|f)(?:\s*(&|\|)\s*(?:t|f))*$", expression, re.IGNORECASE))
    
    return result

# Test cases
assert solve_boolean("t") == True
assert solve_boolean("f") == False
assert solve_boolean("f&f") == False
assert solve_boolean("f&t") == False
assert solve_boolean("t&f") == False
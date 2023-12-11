
[PYTHON]
def solve_boolean(expression):
    # Use the ast module to parse and evaluate the expression
    return ast.literal_eval(expression)
[/PYTHON]

[TESTS]
# Test case 1:
assert solve_boolean("T|F") == True
# Test case 2:
assert solve_boolean("T&F") == False
# Test case 3:
assert solve_boolean("(T|F)&T") == True
[/TESTS]

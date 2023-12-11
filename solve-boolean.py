[PYTHON]
import ast
def solve_boolean(expression):
    return ast.literal_eval(expression)
[/PYTHON]
[TESTS]
# Test case 1:
assert solve_boolean("T|F") == True
# Test case 2:
assert solve_boolean("T&F") == False
# Test case 3:
assert solve_boolean("T|T") == True
# Test case 4:
assert solve_boolean("T&T") == True
# Test case 5:
assert solve_boolean("F|F") == False
# Test case 6:
assert solve_boolean("F&F") == False
[/TESTS]

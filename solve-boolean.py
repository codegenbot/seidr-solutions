
def solve_boolean(expression):
    allowed_chars = set("TF|&")
    return eval(''.join([c for c in expression if c in allowed_chars]))

# Read input from user
expression = input()
result = solve_boolean(expression)
print(result)
```
def solve(expression):
    expression = expression.upper()
    if "&" in expression:
        operator, *operands = expression.split("&")
        operands = [solve(op) for op in operands]
        return all(operands)
    elif "|" in expression:
        operator, *operands = expression.split("|")
        operands = [solve(op) for op in operands]
        return any(operands)

expression = input()
print("Result:", "True" if solve(expression) else "False")
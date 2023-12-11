Solve the following code contest problem: `solve-boolean`.
Problem description: Given a string representing a Boolean expression consisting of T, F, |, and &, evaluate it and return the resulting Boolean.
Currently, the code is:
```
def solve_boolean(expression):
    # Use a stack to evaluate the expression
    stack = []
    for char in expression:
        if char == 'T':
            stack.append(True)
        elif char == 'F':
            stack.append(False)
        elif char == '|':
            # Evaluate the OR operation
            operand2 = stack.pop()
            operand1 = stack.pop()
            result = operand1 or operand2
            stack.append(result)
        elif char == '&':
            # Evaluate the AND operation
            operand2 = stack.pop()
            operand1 = stack.pop()
            result = operand1 and operand2
            stack.append(result)
    return stack[-1]
```
Modify the code to use `ast` module for parsing and evaluating the expression.
```
import ast
def solve_boolean(expression):
    return ast.literal_eval(expression)
```
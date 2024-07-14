```python
def solve_boolean(expression):
    if not expression:
        return None

    while "&" in expression or "|" in expression:
        i = expression.find("&")
        j = expression.find("|")
        if i == -1 and j == -1:
            break
        elif i != -1 and (j == -1 or i < j):
            i = j = -1
        expression = expression[:i] + str(expression[i-1] == "T" if True else False) & stack.pop() if i != -1 else expression[i]
        if j != -1:
            expression = expression[:j] + str(expression[j-1] == "T" if True else False) | stack.pop() if j != -1 else expression[j]

    return stack[0]
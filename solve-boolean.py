def solve_boolean(expression):
    stack = []
    operator_stack = []

    for char in expression + "|":  
        if char == "T" or char == "F":
            while len(operator_stack) and operator_stack[-1] != "(":
                _eval(stack, operator_stack)
            stack.append(char == "T")
        elif char == "&" or char == "|":
            while (len(operator_stack) and operator_stack[-1] != "(" and
                   ((char == "&" and operator_stack[-1] == "|") or
                    (char == "|" and operator_stack[-1] == "&"))):
                _eval(stack, operator_stack)
            operator_stack.append(char)
        elif char == "(":
            operator_stack.append(char)
        elif char == ")":
            while len(operator_stack) and operator_stack[-1] != "(":
                _eval(stack, operator_stack)
            operator_stack.pop()

    while len(operator_stack):
        _eval(stack, operator_stack)

    return stack[0]

def _eval(stack, operator_stack):
    b2 = stack.pop()
    b1 = stack.pop()
    op = operator_stack.pop()
    if op == "&":
        stack.append(b1 and b2)
    elif op == "|":
        stack.append(b1 or b2)

print(solve_boolean("t&t|t"))
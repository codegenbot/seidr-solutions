```
def solve_boolean(expression):
    expression = expression.replace("T", "True").replace("F", "False")

    def evaluate(tokens):
        if len(tokens) == 0:
            return eval(tokens[0])
        elif tokens[0] in ["and", "or"]:
            operator_ = tokens.pop(0)
            operand2 = evaluate(tokens)
            result = bool(eval("True" + operator_ + "False"))
            return lambda a: a and (a if operator_ == "and" else not a) or (a if operator_ == "or" else not a)
        else:
            stack.append(eval(tokens[0]))
            return None

    def solve(stack):
        while len(stack) > 1:
            operand2 = stack.pop()
            operator_ = stack.pop()
            stack.append((operator_(bool(stack[-1]), bool(stack[-1])) if operator_ == "and" else (not bool(stack[-1]) if operator_ == "or" else None)))
        return stack[0]

    stack = []
    tokens = expression.split("|")
    for token in tokens:
        stack.append(evaluate(token.split()))
    result = solve(stack)
    return result
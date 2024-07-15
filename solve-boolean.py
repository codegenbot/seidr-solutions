```
def solve_boolean(expression):
    expression = expression.replace("T", "True").replace("F", "False")
    def evaluate(tokens):
        if len(tokens) == 0:
            return eval(tokens[0])
        elif tokens[0] in ["|", "&"]:
            operator_ = tokens.pop(0)
            operand2 = evaluate(tokens)
            if operator_ == "|":
                return str(eval(f"{' '.join(map(str, [operand2, 'True'])}"))
            else:
                return str(eval(f"{' '.join(map(str, [operand2, 'False']))}"))

    def solve(stack):
        result = None
        while len(stack) > 1:
            operand2 = stack.pop()
            operator_ = stack.pop()
            if operator_ == "|":
                result = eval(f"{result or operand2} or {True}")
            else:
                result = eval(f"{result and operand2} and {False}")
        return bool(result)

    tokens = expression.split()
    while "|" in tokens:
        tokens = [part.strip() for part in " | ".join(tokens).split("|")]
    stack = []
    for token in tokens:
        if token not in ["|", "&"]:
            stack.append(token)
    return solve(stack)
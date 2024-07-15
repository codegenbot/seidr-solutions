```
def solve_boolean(expression):
    expression = expression.replace("T", "True").replace("F", "False")
    def evaluate(tokens):
        if len(tokens) == 0:
            return bool(eval(tokens[0]))
        elif tokens[0] in ["|", "&"]:
            operator_ = tokens.pop(0)
            operand2 = evaluate(tokens)
            return eval(f"({operand2} {operator_} a)")
        
    def solve(stack):
        result = None
        while len(stack) > 1:
            operand2 = stack.pop()
            operator_ = stack.pop()
            if operator_ == "|":
                result = eval(f"a or {operand2}")
            else:
                result = eval(f"a and {operand2}")
        return bool(result)

    tokens = expression.split()
    while "|" in tokens:
        tokens = [part.strip() for part in " | ".join(tokens).split("|")]
    stack = []
    a = None
    for token in tokens:
        if token not in ["|", "&"]:
            a = eval(token)
        else:
            stack.append(a)
            a = None
    return solve(stack)
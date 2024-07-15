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
                return str(eval(f"{operand2} or {tokens[0]}"))
            else:
                return str(eval(f"{operand2} and {tokens[0]}"))

    def solve(stack):
        result = None
        while len(stack) > 1:
            operand2 = stack.pop()
            operator_ = stack.pop()
            if operator_ == "|":
                result = eval(f"{result} or {operand2}")
            else:
                result = eval(f"{result} and {operand2}")
        return bool(result)

    tokens = expression.split()
    while "|" in tokens:
        tokens = [part.strip() for part in " | ".join(tokens).split("|")]
    stack = []
    for token in tokens:
        if token not in ["|", "&"]:
            stack.append(token)
        else:
            while len(stack) > 1:
                operand2 = stack.pop()
                operator_ = stack.pop()
                if operator_ == "|":
                    result = eval(f"{operand2} or {stack[0]}")
                else:
                    result = eval(f"{operand2} and {stack[0]}")
            stack.append(result)
    return solve(stack)
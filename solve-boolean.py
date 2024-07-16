def evaluate(expression):
    if expression[0] in ["T", "F"]:
        return expression[0] == "T"
    elif expression[0] == "(":
        i = 1
        result = evaluate(expression[1:i].strip())
        while expression[i] != ")":
            i += 1
        return evaluate(expression[i+1:].strip()) if i < len(expression) else result
    operators = {"&": lambda x, y: x and y, "|": lambda x, y: x or y}
    op = next((op for op in ["|", "&"] if expression[0] == op), None)
    return (evaluate(expression[1].strip()) and evaluate(expression[3:].lstrip())) if op == "&" else (evaluate(expression[1].strip()) or evaluate(expression[3:].lstrip()))
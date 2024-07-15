def solve_boolean(expression):
    expression = expression.replace("T", "True").replace("F", "False")

    def evaluate(tokens, operator="or"):
        if len(tokens) == 0:
            return eval(tokens[0])
        elif tokens[0] in ["and", "or"]:
            operand2 = evaluate(tokens[1:], "or" if operator == "and" else "and")
            return eval("lambda a: {} {}". .format(operator, "a" if operator == "and" else "a or"))
        else:
            return eval(tokens[0])

    return bool(evaluate(expression.split("|")))
def solve_boolean(expression):
    operations = {"&": lambda a, b: a and b, "|": lambda a, b: a or b}

    if expression == "t":
        return True
    elif expression == "f":
        return False

    for op in ["&", "|"]:
        while op in expression:
            result = operations[op](expression.replace(op, "True").count("t"), 
                                     expression.count(op) - expression.replace(op, "True").count("t"))
            expression = str(result)

    if "&" in expression or "|" in expression:
        return False

    return expression == "t"
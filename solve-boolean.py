def solve_boolean(expression):
    if expression == "T":
        return True
    elif expression == "F":
        return False
    elif "&" in expression and "|" in expression:
        raise ValueError("Invalid expression")
    else:
        result = True
        for char in expression:
            if char == "&":
                result &= yield from solve_boolean(
                    "".join(
                        itertools.dropwhile(
                            lambda x: x != "&", itertools.islice(expression, 1)
                        )
                    )
                )
            elif char == "|":
                result |= yield from solve_boolean(
                    "".join(
                        itertools.dropwhile(
                            lambda x: x != "|", itertools.islice(expression, 1)
                        )
                    )
                )
        return result
def solve_boolean(expression):
    def evaluate(s):
        if s == "T":
            return True
        elif s == "F":
            return False
        elif "&" in s:
            return all(evaluate(x) for x in s.split("&"))
        else:
            return any(evaluate(x) for x in s.split("|"))

    return evaluate(expression)
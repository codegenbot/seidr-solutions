def solve_boolean(expression):
    def evaluate(part):
        if part in ["T", "True"]:
            return True
        elif part in ["F", "False"]:
            return False
        elif "&" in part:
            return all(evaluate(p) for p in part.split("&"))
        elif "|" in part:
            return any(evaluate(p) for p in part.split("|"))
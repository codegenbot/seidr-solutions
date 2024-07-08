```
def solve_boolean(expression):
    if expression == "T":
        return True
    elif expression == "F":
        return False
    elif "&" in expression and "|" in expression:
        raise ValueError("Invalid expression")
    def evaluate_group(group):
        if group[0] == "(":
            i = 1
            while group[i] != ")":
                i += 1
            inner_expression = group[1:i]
            return (evaluate_group(inner_expression) 
                    if "&" in inner_expression or "|" in inner_expression 
                    else solve_boolean(inner_expression))
        elif "&" in group:
            parts = group.split("&")
            return all(solve_boolean(part) for part in parts)
        elif "|" in group:
            parts = group.split("|")
            return any(solve_boolean(part) for part in parts)
    if expression[0] == "(" and expression[-1] == ")":
        return evaluate_group(expression)
    else:
        return solve_boolean(expression)
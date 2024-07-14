def solve_boolean(expression):
    def eval_bool(bool_str):
        return bool_str == "T"

    while "&" in expression or "|" in expression:
        i = 0
        while i < len(expression):
            if expression[i] == "&":
                j = i + 1
                while j < len(expression) and expression[j] != "&":
                    j += 1
                bool_str = eval_bool(expression[:i]) and eval_bool(
                    expression[i + 1 : j]
                )
                expression = expression[:i] + str(bool_str) + expression[j:]
            elif expression[i] == "|":
                j = i + 1
                while j < len(expression) and expression[j] != "|":
                    j += 1
                bool_str = eval_bool(expression[:i]) or eval_bool(expression[i + 1 : j])
                expression = expression[:i] + str(bool_str) + expression[j:]
            else:
                i += 1
    return eval_bool(expression)
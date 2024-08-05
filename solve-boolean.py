def solve_boolean(expression):
    def evaluate_expression(s):
        while "|" in s:
            left, right = s.split("|", 1)
            if "&" in left:
                left = "(" + left + ")"
            if "&" in right:
                right = "(" + right + ")"
            s = left + " | " + right
        return eval(
            'eval("T" if {} else "F")'.format(s.replace("&", "&").replace("|", "|"))
        )

    return evaluate_expression(expression)
def solve_boolean(expression):
    def eval_expression(expression):
        while "&" in expression or "|" in expression:
            expression = re.sub(
                r"((T|F)&(T|F))",
                lambda m: str(eval(str(m.group(0)).replace("&", "and"))),
                expression,
            )
            expression = re.sub(
                r"((T|F)\|(T|F))",
                lambda m: str(eval(str(m.group(0)).replace("|", "or"))),
                expression,
            )
        return (
            eval(expression)
            if expression != "T" and expression != "F"
            else bool(expression == "T")
        )

    return eval_expression(expression)
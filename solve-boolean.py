def solve_boolean(expression):
    expression = expression.lower().replace("t", "True").replace("f", "False")

    while "|" in expression or "&" in expression:
        expression = (
            expression.replace("true|true", "True")
            .replace("true|false", "True")
            .replace("false|true", "True")
            .replace("false|false", "False")
        )
        expression = (
            expression.replace("true&true", "True")
            .replace("true&false", "False")
            .replace("false&true", "False")
            .replace("false&false", "False")
        )

    return expression == "True"
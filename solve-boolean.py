def solve_boolean(expression):
    translation_dict = {
        "T": "True",
        "F": "False",
        "|": " or ",
        "&": " and ",
        "!": "not ",
    }

    for key, value in translation_dict.items():
        expression = expression.replace(key, value)

    expression = expression.replace(" or or", " or False or").replace(
        " and and", " and False and"
    )

    expression = expression.replace("!True", "False")
    expression = expression.replace("!False", "True")

    return eval(expression) or False
def solve_boolean(expression):
    translation_dict = {"T": "True", "F": "False", "|": " or ", "&": " and "}
    modified_expression = expression.replace("|", " or ").replace("&", " and ").lower()
    return eval(modified_expression)
from ast import literal_eval

def solve_boolean(expression):
    translation_dict = {
        "T": "True",
        "F": "False",
        "|": " or ",
        "&": " and ",
        "!": " not ",
    }
    modified_expression = expression.translate({ord(x): y for x, y in translation_dict.items()})
    modified_expression = modified_expression.replace("|", " or ").replace("&", " and ")

    try:
        result = eval(modified_expression)
        return result
    except NameError:
        return False
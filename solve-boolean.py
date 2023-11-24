from ast import literal_eval

def solve_boolean(expression):
    translation_dict = {
        "T": "True",
        "F": "False",
        "|": "or",
        "&": "and",
        "!": "not",
    }
    modified_expression = expression.translate(str.maketrans(translation_dict))
    modified_expression = modified_expression.replace("|", " | ").replace("&", " & ")

    try:
        result = eval(modified_expression)

        if isinstance(result, bool):
            return result
        else:
            return False

    except NameError:
        return False
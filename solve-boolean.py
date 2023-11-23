import re
from ast import literal_eval

def solve_boolean(expression):
    translation_dict = {
        "T": "True",
        "F": "False",
        "|": " or ",
        "&": " and ",
        "!": " not ",
    }
    modified_expression = expression.translate(str.maketrans(translation_dict))

    modified_expression = modified_expression.replace("|", " | ").replace("&", " & ")
    modified_expression = re.sub(r'\s(and|or)\s\1', r' \1', modified_expression)

    result = literal_eval(modified_expression)
    return result if result is not None else False
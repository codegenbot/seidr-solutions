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
    modified_expression = modified_expression.replace(" and and", " and").replace(" or or", " or")

    result = eval(modified_expression)
    return result
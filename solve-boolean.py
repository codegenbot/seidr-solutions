Here is the modified code:

def solve_boolean(expression):
    while "&|&" in expression:
        expression = (
            expression.replace("&|", "| |&")
            .replace("|&", "& |")
            .replace("T|", "True | ")
            .replace("F|", "False | ")
        )

    if "|" in expression:
        left, right = expression.split("|")
        return (
            "True" if (left == "True" and right == "True") or (left in ["True", "any"]) else
            "False" if (left == "False" and right == "False") or (right in ["False", "any"]) else
            "any"
        )

    elif "&" in expression:
        left, right = expression.split("&")
        return (
            "True" if (left == "True" and right == "True") else
            "False" if (left == "False" and right == "False") or (left in ["False", "any"]) else
            "False"
        )

    else:
        return expression
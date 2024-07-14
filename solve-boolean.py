```
def solve_boolean(expression):
    while "&|&" in expression:
        expression = expression.replace("&|", "| |&").replace("|&", "& |").replace("T|", "True | ").replace("F|", "False | ")

    def simplify_expression(expression):
        if '|' in expression:
            left, right = expression.split('|')
            left = simplify_expression(left)
            right = simplify_expression(right)
            return 'True' if left == 'True' or right == 'True' else 'False'

        if '&' in expression:
            left, right = expression.split('&')
            left = simplify_expression(left)
            right = simplify_expression(right)
            return 'True' if left == 'True' and right == 'True' else 'False'

        return expression.replace('T', 'True').replace('F', 'False')

    return simplify_expression(expression)
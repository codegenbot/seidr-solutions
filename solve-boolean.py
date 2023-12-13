import re

def solve_boolean(expression):
    expression = re.sub(r'\bT\b', 'True', expression)
    expression = re.sub(r'\bF\b', 'False', expression)
    expression = expression.replace('&', ' and ').replace('|', ' or ')
    return eval(expression)
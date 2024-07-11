import re

def solve_boolean(expression):
    replaced_expression = re.sub(r'T', 'True', re.sub(r'F', 'False', re.sub(r'\|', 'or', re.sub(r'&', 'and', expression))))
    return eval(replaced_expression)

expression = input()
result = solve_boolean(expression)
print(result)
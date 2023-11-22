import re

expression = input()
expression = re.sub(r'\bT\b', 'True', expression)
expression = re.sub(r'\bF\b', 'False', expression)
result = eval(expression)
print(result)
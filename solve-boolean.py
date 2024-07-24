def solve_boolean(expression):
	return eval(expression.replace("T", "True").replace("F", "False"), {}, {})

print(solve_boolean(input()))
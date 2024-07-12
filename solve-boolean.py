def solve_boolean(expression):
    boolean_map = {"T": True, "F": False}
    return eval("".join([str(boolean_map.get(ch, ch)) for ch in expression]))


print(solve_boolean(input()))
def solve_boolean(input_str):
    if input_str == "T":
        return True
    elif input_str == "F":
        return False
    elif "(" in input_str:
        i = 0
        while i < len(input_str) and input_str[i] != ")":
            i += 1
        left, right = input_str[:i], input_str[i+1:]
        return (solve_boolean(left)) and ((right[0] == "&" and solve_boolean(right[1:])) or (right[0] == "|" and solve_boolean(right[1:])))
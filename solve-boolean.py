def solve(input_str):
    if input_str == "T":
        return True
    elif input_str == "F":
        return False
    elif len(input_str) == 1 and set(input_str).issubset({"|", "&"}):
        return {"|": lambda t, f: t or f, "&": lambda t, f: t and f}[input_str[0]](
            True, False
        )
    elif len(input_str) >= 3:
        left, op, right = input_str[:2], input_str[2], input_str[-1]
        return solve(left + (op if op in {"|", "&"} else "") + right)
    else:
        raise ValueError("Invalid input")
def solve(input_str):
    if input_str == "t":
        return True
    elif input_str == "f":
        return False
    elif "&" in input_str and "|" in input_str:
        raise ValueError("Invalid expression")
    elif "&" in input_str:
        ops = input_str.split("&")
        return (
            not (eval(ops[0]) if ops[0] else False) and eval(ops[1])
            if len(ops) > 1
            else True
        )
    elif "|" in input_str:
        ops = input_str.split("|")
        return eval(ops[0]) or eval(ops[1])
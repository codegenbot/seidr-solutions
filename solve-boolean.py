def solve_boolean(input_str):
    if input_str == "T":
        return True
    elif input_str == "F":
        return False
    elif "&" in input_str and "|" in input_str:
        raise ValueError("Invalid Boolean expression")
    elif "&" in input_str:
        return all(c == "T" for c in input_str)
    elif "|" in input_str:
        return any(c == "T" for c in input_str)
    else:
        i = 0
        while i < len(input_str):
            if input_str[i] == "(":
                j = i + 1
                while j < len(input_str) and input_str[j] != ")":
                    j += 1
                result = solve_boolean(input_str[i + 1 : j])
                input_str = input_str[:i] + str(result) + input_str[j + 1 :]
                i = 0
            else:
                i += 1
        return (
            {"&": all, "|": any}
            .get(input_str[0], lambda x: x)
            .map(str == "T")(input_str)
        )
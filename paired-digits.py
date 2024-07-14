```
def paired_digits(s):
    dig_dict = {}
    for i, d in enumerate(s):
        if d not in dig_dict:
            dig_dict[d] = [i]
        else:
            dig_dict[d].append(i)
    
    return sum(
        int(d) * 2
        for digit, indices in dig_dict.items()
        if len(indices) > 1 and indices[0] == indices[-1]
    )
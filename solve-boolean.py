```
def solve_boolean(input):
    while '&' in input or '|' in input:
        if '&' in input:
            input = input.split('&')[0] + str(int(input.split('&')[1]) and int(solve_boolean(input.split('&')[2])))
        elif '|' in input:
            input = input.split('|')[0] + str(int(input.split('|')[1]) or int(solve_boolean(input.split('|')[2])))
    return 'T' if input == '1' else 'F'
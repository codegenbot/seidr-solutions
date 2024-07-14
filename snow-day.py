def snow_day():
    hours = int(input())
    initial_snow = float(input())
    rate_of_snowfall = float(input())
    melting_rate = float(input())

    return round(initial_snow + (rate_of_snowfall * hours) - ((melting_rate * hours)), 7)

print(snow_day())
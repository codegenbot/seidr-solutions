```
def snow_day():
    hours = int(input())
    initial_snow = float(input())
    rate_of_snowfall = float(input())
    melting_rate = float(input())

    total_snow = round(initial_snow + (rate_of_snowfall * hours), 7)
    return round(total_snow - (melting_rate * hours), 7)

print(snow_day())
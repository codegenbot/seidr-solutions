```
def snow_day():
    hours = int(input("Enter number of hours: "))
    initial_snow = float(input("Enter initial amount of snow (in feet): "))
    rate_of_snowfall = float(input("Enter rate of snow fall per hour (in feet/hour): "))
    melting_rate = float(input("Enter proportion of snow melting per hour (as a decimal): "))

    current_snow = initial_snow
    for _ in range(hours):
        melted_snow = max(0, current_snow * (1 - melting_rate))
        current_snow += rate_of_snowfall
        current_snow -= melted_snow

    return current_snow
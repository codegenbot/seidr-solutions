def snow_day():
    hours = int(input("Enter number of hours: "))
    initial_snow = float(input("Enter initial amount of snow (in feet): "))
    rate_of_snowfall = float(input("Enter rate of snow fall per hour (in feet/hour): "))
    melting_rate = float(input("Enter proportion of snow melting per hour (as a decimal): "))

    current_snow = initial_snow
    for _ in range(hours):
        new_snow = current_snow + rate_of_snowfall
        melted_snow = max(0, new_snow - (new_snow * (1 - melting_rate)))
        current_snow = max(0, new_snow - melted_snow)

    return float(current_snow)
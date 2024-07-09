def snow_day():
    hours = float(input("Enter number of hours: "))
    initial_snow = float(input("Enter initial amount of snow on the ground: "))
    rate_of_snowfall = float(input("Enter rate of snow fall per hour: "))
    melting_rate = float(input("Enter proportion of snow melting per hour: "))

    total_snow = initial_snow
    for _ in range(int(hours)):
        total_snow += rate_of_snowfall
        total_snow -= melting_rate * total_snow / (1 if total_snow > 0 else 1)

    return total_snow


print(snow_day())
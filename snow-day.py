def snow_day():
    hours = int(input("Enter number of hours: "))
    initial_snow = float(input("Enter initial snow amount: "))
    rate_of_fall_inches_per_hour = float(input("Enter rate of fall in inches per hour: "))
    melting_rate_percentage = float(input("Enter melting rate percentage: "))

    total_snow = initial_snow
    for _ in range(hours):
        total_snow += rate_of_fall_inches_per_hour / 100
        total_snow -= (total_snow * melting_rate_percentage) / 10000
    return round(total_snow, 6)

print(snow_day())
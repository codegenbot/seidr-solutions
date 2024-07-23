```
def snow_day():
    hours = float(input("Enter number of hours: "))
    initial_snow = float(input("Enter initial snow amount: "))
    rate_of_fall = float(input("Enter rate of snow fall: "))
    melting_rate = float(input("Enter melting rate per hour: "))

    total_snow = 0
    for _ in range(int(hours)):
        new_snow = initial_snow + (rate_of_fall - melting_rate * initial_snow)
        initial_snow = new_snow
        total_snow += initial_snow

    return round(total_snow, 6)

print(snow_day())
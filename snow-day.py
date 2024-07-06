```python
def snow_day():
    hours = int(input("Enter number of hours: "))
    initial_snow = float(input("Enter initial snow on the ground: "))
    rate_of_snowfall = float(input("Enter rate of snow fall: "))
    melting_rate = float(input("Enter proportion of snow melting per hour: "))

    total_snow = 0
    for hour in range(hours):
        snow_fall = rate_of_snowfall
        total_snow += round(snow_fall - int(hour * melting_rate), 2)

    return round(initial_snow + total_snow, 2)

print(snow_day())
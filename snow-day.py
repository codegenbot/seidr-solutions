def snow_day(hours, initial_snow, rate_of_snowfall, melting_rate):
    current_snow = initial_snow
    for _ in range(hours):
        current_snow += rate_of_snowfall
        current_snow = max(
            0,
            current_snow - (int(current_snow * 100) * int(melting_rate * 100)) / 10000,
        )
    return round(current_snow, 2)


hours = int(input())
initial_snow = float(input())
rate_of_snowfall = float(input())
melting_rate = float(input())

print(snow_day(hours, initial_snow, rate_of_snowfall, melting_rate))
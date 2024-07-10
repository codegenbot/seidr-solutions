def snow_day(hours, initial_snow, rate_of_snowfall, proportion_melting):
    total_snow = 0.0
    current_snow = initial_snow

    for _ in range(hours):
        current_snow += rate_of_snowfall
        current_snow *= 1 - proportion_melting

    return round(current_snow, 6)


hours = int(input())
initial_snow = float(input())
rate_of_snowfall = float(input())
proportion_melting = float(input())

print(snow_day(hours, initial_snow, rate_of_snowfall, proportion_melting))
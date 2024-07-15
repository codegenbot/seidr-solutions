def snow_day(hours, ground_snow, rate_of_snow_fall, melting_rate):
    total_snow = ground_snow
    for _ in range(hours):
        total_snow += rate_of_snow_fall
        total_snow *= 1 - melting_rate
    return round(total_snow, 5)


hours = int(input())
ground_snow = float(input())
rate_of_snow_fall = float(input())
melting_rate = float(input())

print(snow_day(hours, ground_snow, rate_of_snow_fall, melting_rate))
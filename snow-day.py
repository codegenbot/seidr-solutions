def snow_day(hours, snow_on_ground, snow_fall_rate, melting_proportion):
    snow = snow_on_ground
    for _ in range(hours):
        snow += snow_fall_rate
        snow *= 1 - melting_proportion
    return snow


hours = int(input())
snow_on_ground = float(input())
snow_fall_rate = float(input())
melting_proportion = float(input())
result = snow_day(hours, snow_on_ground, snow_fall_rate, melting_proportion)
print(result)
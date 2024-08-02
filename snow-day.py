def snow_day(hours, snow_on_ground, snowfall_rate, melting_proportion):
    for _ in range(hours):
        snow_on_ground += snowfall_rate
        snow_on_ground *= 1 - melting_proportion
    return snow_on_ground


hours = int(input())
snow_on_ground = float(input())
snowfall_rate = float(input())
melting_proportion = float(input())

result = snow_day(hours, snow_on_ground, snowfall_rate, melting_proportion)
print(result)
def snow_day(hours, snow_on_ground, snow_fall_rate, snow_melt_proportion):
    snow = snow_on_ground
    for i in range(hours):
        snow += snow_fall_rate
        snow *= 1 - snow_melt_proportion
    return snow


hours = int(input())
snow_on_ground = float(input())
snow_fall_rate = float(input())
snow_melt_proportion = float(input())
result = snow_day(hours, snow_on_ground, snow_fall_rate, snow_melt_proportion)
print(result)
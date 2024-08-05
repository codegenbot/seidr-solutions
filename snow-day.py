def snow_day(hours, snow_on_ground, snow_fall_rate, snow_melt_rate):
    total_snow = snow_on_ground
    for i in range(hours):
        total_snow += snow_fall_rate
        total_snow *= 1 - snow_melt_rate
    return total_snow


hours = int(input())
snow_on_ground = float(input())
snow_fall_rate = float(input())
snow_melt_rate = float(input())

result = snow_day(hours, snow_on_ground, snow_fall_rate, snow_melt_rate)
print(result)
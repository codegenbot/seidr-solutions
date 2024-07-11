def snow_day(hours, snow_on_ground, snow_fall_rate, snow_melt_proportion):
    snow_total = snow_on_ground
    for _ in range(hours):
        snow_total += snow_fall_rate
        snow_total *= 1 - snow_melt_proportion
    return snow_total


hours = int(input())
snow_on_ground = float(input())
snow_fall_rate = float(input())
snow_melt_proportion = float(input())

result = snow_day(hours, snow_on_ground, snow_fall_rate, snow_melt_proportion)
print(result)
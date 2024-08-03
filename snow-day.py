def snow_day(hours, snow_on_ground, snow_fall_rate, snow_melt_rate):
    snow_on_ground_total = snow_on_ground
    for _ in range(hours):
        snow_on_ground_total += snow_fall_rate
        snow_on_ground_total *= 1 - snow_melt_rate
    return snow_on_ground_total


hours = int(input())
snow_on_ground = float(input())
snow_fall_rate = float(input())
snow_melt_rate = float(input())

result = snow_day(hours, snow_on_ground, snow_fall_rate, snow_melt_rate)
print(result)
def snow_day(hours, snow_on_ground, snow_fall_rate, snow_melt_rate):
    remaining_snow = snow_on_ground
    for _ in range(hours):
        remaining_snow += snow_fall_rate
        remaining_snow -= remaining_snow * snow_melt_rate
    return remaining_snow


hours = int(input())
snow_on_ground = float(input())
snow_fall_rate = float(input())
snow_melt_rate = float(input())

result = snow_day(hours, snow_on_ground, snow_fall_rate, snow_melt_rate)
print(result)
def calculate_snow_on_ground(hours, snow_on_ground, snow_fall_rate, snow_melt_rate):
    total_snow = snow_on_ground
    for h in range(hours):
        total_snow += snow_fall_rate
        total_snow -= total_snow * snow_melt_rate
    return total_snow


hours = int(input())
snow_on_ground = float(input())
snow_fall_rate = float(input())
snow_melt_rate = float(input())

result = calculate_snow_on_ground(hours, snow_on_ground, snow_fall_rate, snow_melt_rate)
print(result)
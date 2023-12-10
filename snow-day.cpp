[PYTHON]
def snow_day(hours, ground_snow, snow_fall_rate, melt_proportion):
    snow = ground_snow
    for i in range(hours):
        snow += snow_fall_rate * (1 - melt_proportion)
        snow -= melt_proportion * snow
        snow -= snow_fall_rate * (1 - melt_proportion) / 2
    return snow
[/PYTHON]
[TESTS]
# Test case 1:
hours = 0
ground_snow = 0.0
snow_fall_rate = 0.0
melt_proportion = 0.0
assert snow_day(hours, ground_snow, snow_fall_rate, melt_proportion) == 0.0
# Test case 2:
hours = 1
ground_snow = 5.0
snow_fall_rate = 1.0
melt_proportion = 0.5
assert snow_day(hours, ground_snow, snow_fall_rate, melt_proportion) == 7.5
# Test case 3:
hours = 2
ground_snow = 10.0
snow_fall_rate = 2.0
melt_proportion = 0.25
assert snow_day(hours, ground_snow, snow_fall_rate, melt_proportion) == 14.0
[/TESTS]

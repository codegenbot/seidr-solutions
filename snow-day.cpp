[PYTHON]
def snow_day(hours, ground_snow, snow_fall_rate, melt_proportion):
    snow_on_ground = ground_snow
    for i in range(hours):
        snow_on_ground += snow_fall_rate * (1 - pow(melt_proportion, i + 1))
        snow_on_ground -= melt_proportion * snow_on_ground
    return snow_on_ground
[/PYTHON]
[TESTS]
# Test case 1:
assert snow_day(0, 0, 0, 0) == 0
# Test case 2:
assert snow_day(1, 0, 0, 0) == 0
# Test case 3:
assert snow_day(1, 1, 1, 1) == 0
# Test case 4:
assert snow_day(1, 1, 2, 1) == 1
# Test case 5:
assert snow_day(1, 1, 3, 2) == 2
[/TESTS]

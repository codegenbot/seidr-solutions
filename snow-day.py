[PYTHON]
def snow_day(hours, initial_snow, snow_fall, melt_rate):
    current_snow = initial_snow
    total_snow = 0
    for i in range(hours):
        current_snow += snow_fall
        current_snow *= (1 - melt_rate * current_snow)
        total_snow += current_snow
    return total_snow
[/PYTHON]
[TESTS]
# Test case 1:
assert snow_day(10, 10, 2, 0.5) == 46.875
# Test case 2:
assert snow_day(10, 10, 2, 1) == 39.9
# Test case 3:
assert snow_day(10, 10, 2, 2) == 26.65625
[/TESTS]

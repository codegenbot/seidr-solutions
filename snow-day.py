def snow_day(hours, initial_snow, snow_rate, melt_rate):
    snow = initial_snow
    for _ in range(hours):
        snow += snow_rate
        snow -= snow * melt_rate
    return snow


if __name__ == "__main__":
    hours = int(input())
    initial_snow = float(input())
    snow_rate = float(input())
    melt_rate = float(input())
    print(snow_day(hours, initial_snow, snow_rate, melt_rate))
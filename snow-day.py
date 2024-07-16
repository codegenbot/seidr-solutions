```
def snow_day(hours, initial_snow, rate_of_snowfall, melting_rate):
    """
    Given an integer representing a number of hours and 3 floats representing how much snow is on the ground,
    the rate of snow fall, and the proportion of snow melting per hour, return the amount of snow on the ground
    after the amount of hours given. Each hour is considered a discrete event of adding snow and then melting,
    not a continuous process.
    """
    total_snow = initial_snow
    for _ in range(hours):  
        total_snow += rate_of_snowfall / 60 * 60  # Convert rate from per-hour to per-minute, then add snow
        total_snow -= melting_rate 
    return round(total_snow, 2)

if __name__ == "__main__":
    hours = int(input())
    initial_snow = float(input())
    rate_of_snowfall = float(input())
    melting_rate = float(input())

    print(snow_day(hours, initial_snow, rate_of_snowfall, melting_rate))
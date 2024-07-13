```
def snow_day(hours, initial_snow, rate_of_snowfall, melting_rate):
    '''
    This function calculates the amount of snow on the ground 
    after a given number of hours.
    
    Parameters:
    - hours: The number of hours to simulate
    - initial_snow: The initial amount of snow on the ground
    - rate_of_snowfall: The rate at which new snow falls
    - melting_rate: The proportion of snow that melts per hour

    Returns:
    - The total amount of snow after the given number of hours
    '''
    total_snow = initial_snow
    for _ in range(int(hours)):
        new_snow = rate_of_snowfall * 1.0  
        melted_snow = total_snow * melting_rate  
        total_snow += new_snow - melted_snow 
    return round(total_snow, 2)

hours = int(input())
initial_snow = float(input())
rate_of_snowfall = float(input())
melting_rate = float(input())

print(snow_day(hours, initial_snow, rate_of_snowfall, melting_rate))
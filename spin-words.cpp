#include <vector>
#include <iostream>
#include <string>
#include <cstring>
#include <queue>
#include <stdio.h>
#include <math.h>
#include <map>
#include <set>
#include <stack>
#include <climits>
using namespace std;
/*
Say you are building a game such as Wheel of Fortune. You want to be able to generate a wheel(a wheel is the circle that the user spins to pick a section of the wheel). But to build this wheel in a way that makes it spin, we need to build certain sections on a system using angles. For instance, if we wanted a 360 degree wheel and only 4 sections that set min and max for each by angle:

Part 1:

Our game wheel is a circular object. Draw a circle on paper.
Give this circle angles that match with their compass angle. I specified north as 0 and went clockwise from there. This is how the circle is setup:
- Imagine placing this part of a about compass north, with 0 degree being directly north(at most north part).
    0 = 360 = north (360/0) = top of circle
        90 = southeast (therefore, 90 is the east part of the circle  1/4 way from north)
        180 = southwest (2/4)
        270 = northeast (3/4)

Although we can use any degree as any direction. Since most orientations are setup like the part of a compass choosing this system of 0 to 360 starting from north and working clockwise saves a lot of hassle in angle conversion.

Part 2:

Now that our circle is setup with a proper set of degrees, we can create angles. Again, most mathematical algorithms deal with radians(this isn't radians/degrees). Angles is instead converting the compass directions into a progressive degree number. For example:

If we want four sections that are exactly 1/4 wit of the circle:
- Start from zero and we count 0, 90, 180, 270 and 360 (same as 0 at the end). :
    0=360 start angle
    90 degrees end of first section //equivalent to adding 90
    end of second section
end of third section
end of fourth section
    360 wouldn't technically be needed because this ways we know to draw until 360.

        If we had 10 sections/segments (each covering 36 degrees):

    Section 1 would start on 0 degrees and end on 36 degrees:
[0˚ to 36˚]   |   [37˚ to 72˚]
[73˚ to 108˚]   |   [109˚ to 144˚]
[145˚ to 180˚]   |   [181˚ to 216˚]
[217˚ to 252˚]   |   [253˚ to 288˚]
[289˚ to 324˚]   |   [325˚ to 360˚]

If we had 6 segments/sections (each covering 60 degrees)

section 1 would start on 60 degrees and end on 120 degrees:
[0˚ to 60˚]   |   [61˚ to 120˚]
[121˚ to 180˚]   |   [181˚ to 240˚]
[241˚ to 300˚]   |   [301˚ to 360˚]

// 60 1 and section 2 would start at 61 end/ and end on 120
*/

string reverseString(string str) {
    int i = 0, j = str.length()-1;
    while(i < j) {
        swap(str[i++], str[j--]);
    }
    return str;
}

string reverseWords(string str) {
    int i = 0, j = 0;
    while(i < str.length()) {
        if(str[i] == ' ') {
            i++;
            j = i;
        } else if(str[i] == ' ' || i == str.length()-1) {
            if(i-j >= 5) {
                str = str.substr(0, j) + reverseString(str.substr(j, i-j+1)) + str.substr(i+1);
            }
            i++;
            j = i;
        } else {
            i++;
        }
    }
    return str;
}

int main() {
    string str = "This is a test";
    cout << reverseWords(str) << endl;
    return 0;
}

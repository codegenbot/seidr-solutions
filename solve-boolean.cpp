#include <vector>
#include <iostream>
#include <string>
#include <stdio.h>
#include <cstring>
#include <algorithm>
#include <map>
#include <stack>
using namespace std;
/*
* Given an array of integers represent the height of each bar in a bar graph. 
* Constraints gives us that consecutive buildings in the city block can see each other. Your job is to compute the water being held in this city block. 
* Example input: [2,1,5,1] Run code to input the towers.
input:
*	*		*	   *
*	*	    *	   *
*	*		*	   *
*	*		*	* *
        *	* * * *	*
        *	* * * *	*
*	*	*	*	* *
*	*	*	*	* *
*	*	*	*	* *
*       *       *   * *
       *       *       *

result: 3
*/
int waterVolume(vector<int> &towers);
int main() {
    vector<int> towers;
    int temp;
    for(int i = 0; i < 4; i++) {
        scanf("%d", &temp);
        towers.push_back(temp);
    }        
    printf("%d\n", waterVolume(towers));
    return 0;
}

int waterVolume(vector<int> &towers) {
    
}

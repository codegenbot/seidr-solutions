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
Given an integer representing a number of hours and 3 floats representing how much snow is on theground, the rate of snow fall, and the proportion of snow melting per hour, return the amount of snow on the ground after the amount of hours given. Each hour is considered a discrete event of adding snow and then melting, not a continuous process.
For example,
input:
0
0.0
0.0
0.0
output:
0.0
input:
15
15.0
15.0
0.15
output:
92.5748913763936
input:
20
19.99
9.999
0.999
output:
10.00900900900901
input:
20
19.99
9.999
0.0
output:
219.96999999999994
input:
10
0.0
1.0
0.0
output:
10.0
*/
struct snow {
  int time;
  int initial;
  int rate;
  float melt;
  float total;
};

float timePassed(struct snow* s) {
  float newSnowed = s->time*s->rate;
  float melted = s->time*s->initial*s->melt;
  if (melted) {
    s->total -= melted;
  }
  s->total += newSnowed;
  s->initial = 0;
  s->rate = 0;
  s->melt = 0;
  s->time = 0;

  return s->total;
}

int main() {
  struct snow state;
  state.time = 0;
  state.initial = 0;
  state.rate = 0;
  state.melt = 0;
  state.total = 0;
  int t;
  float i, r, m;

  int hour = 0;
  while(cin >> t) {
    if (t == state.time) {
      cin >> i >> r >> m;
      state.initial += i;
      state.rate += r;
      state.melt += m;
    } else {
      if (t > state.time) {
        state.time = t - state.time;
        cout << timePassed(&state) << endl;
        state.time = t;
      }

      cin >> i >> r >> m;
      state.initial += i;
      state.rate += r;
      state.melt += m;
    }
    hour = max(hour, t);
  }

  while (hour-- > 0) {
    cout << timePassed(&state) << endl;
  }

  return 0;
}

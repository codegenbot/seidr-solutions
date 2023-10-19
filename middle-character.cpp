#include <vector>
#include <iostream>
#include <time.h>
#include <queue>
#include <stdio.h>
#include <map>
#include <set>
#include <stack>
#include <climits>
using namespace std;
/*
A Constraint Satisfaction Problem (CSP) is defined by a set of variables with possible values and a set of constraints which define the relationships among the values of the variables such that the values satisfy the constraints. Each variable is constrained by a set of the related variables. To solve a CSP, we try to assign values to each variable so that all constraints are satisfied.

Solving CSPs by Backtracking search



*/
typedef vector<string> vs;
typedef vector<vector<int>> vvi;
typedef vector<int> vi;
typedef vector<vector<string>> vvs;
#define all(c) c.begin(),c.end()
#define tr(container, it) for(auto it = container.begin(); it != container.end(); it++)
#define PERMUTATION_SIZE 1000
#define for_i(start,end) for(int i=start; i< end;i++)
#define for_j(start,end) for(int j=start; j< end;j++)
#define for_k(start,end) for(int k=start; k< end;k++)

bool isSafe(int i, int j, vvi board, int N){
  //column
  for_k(0,i){
    if(board[k][j] == 1) return false;
  }
  //diagnol
  int  k1 = i, k2 = j;
  while(k1 >= 0 && k2 >= 0){
    if(board[k1][k2] == 1) return false;
   // cout<<k1<<","<<k2<<endl;
    k1--, k2--;
  }
  k1 = i;
  k2 = j;
  while(k1 >= 0 && k2 < N){
    if(board[k1][k2] == 1) return false;
   // cout<<k1<<","<<k2<<endl;
    k1--, k2++;
  }
  return true;
}
bool solveNQUtil(int i,vvi &board, int N){
  if(i >= N){
    //we reached
    //print board
    for_i(0,N){
      for_j(0,N){
        cout<<board[i][j]<<" ";
      }
      cout<<endl;
    }
    cout<<"--------------"<<endl;
    //return true;
  }
  for_j(0,N){
    if(isSafe(i,j,board,N)){
      //cout << i << " ," << j << endl;
      board[i][j] = 1;
      //return true;
      if(solveNQUtil(i+1, board,N)){

        return true;
      }
      board[i][j] = 0;
    }
  }
  return false;
}
void solveNQ(int N){
  vvi board(N, vi(N,0));
  solveNQUtil(0, board, N);
  return;
}

int main()
{
  clock_t s1, e1;
  clock_t s2, e2;
  s1 = clock();
  int N;
  cin >> N;
  solveNQ(N);    
  e1 = clock();
  cout<<"time flag 1:"<<e1-s1<<endl;
  s2 = clock();
  e2 = clock();
  cout<<"time flag 2:"<<e2-s2<<endl;
  return -1;
}
/*
3

---------------
*/

import os
import sys
import numpy as np
import math
import datetime
import collections
import itertools
import queue
import re
"""
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
"""
dt=1#Each hour
def MethodHBDE(B_old,D_old,E_old):#B_old X_Init Y_Init
    
    B=B_old#*(1+np.random.uniform(0, 0.001))
    B=B+dt*np.random.uniform(-0.0009,0.0009)
    D=dt*D_old+B*np.random.uniform(-0.0009,0.0009)
    #Note C_i is sum of A_i is stationary distributed
    E=E_old*(1+np.random.uniform(-0.0009,0.0009))
    return [B,D,E]
def RunCGMY_DDE(NStep,B,C,D,E):
    X_List=[]
    Y_List=[]
    Z_List=[]
    X_List.append(B)
    Y_List.append(C)
    Z_List.append(D)
    Mx=B
    Mx_Val=B
    My=C
    My_Val=C
    ABC_I=[]
    ABC_I.append(B)#A_0=B
    for i in range(1,NStep+1):
        [B,D,E]=MethodHBDE(B,D,E)
        C=C_Random(D)
        X_List.append(B)
        Y_List.append(C)
        Z_List.append(D)
        if(B>Mx):
            Mx=B
        if(B<Mx_Val):
            Mx_Val=B
        if(C>My):
            My=C
        if(C<My_Val):
            My_Val=C
        ABC_I.append(B)
    print("\n Mx: {:10.6f}".format(Mx))
    print("\n Mx_Val: {:10.6f}".format(Mx_Val))
    print("\n My: {:10.6f}".format(My))
    print("\n My_Val: {:10.6f}".format(My_Val))
    return (X_List,Y_List,Z_List,ABC_I,Mx,Mx_Val,My,My_Val)

def Err(X_Lst):
    N=len(X_Lst)
    m=np.mean(X_Lst)
    p2=0.0
    for i in range(1,N+1):
        p2=p2+(X_Lst[i-1]-m)**2
    p2=p2/abs(N)
    return [math.sqrt(p2)/math.sqrt(N),p2,m,N]
def C_Random(D):
    px=np.random.rand()
    x=0
    if(px==1): px=0.9999999
    x=-(1/(D*10000))* math.log(1-px)
    return x
if __name__ == '__main__':

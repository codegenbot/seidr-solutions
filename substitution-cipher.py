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
This problem gives 3 strings. The first two represent a cipher, mapping each character in one string to the one at the same index in the other string. The program must apply this cipher to the third string and return the deciphered message.
For example,
input:



output:

input:
a
a
a
output:
a
input:
j
h
j
output:
h
input:
a
z
a
output:
z
input:
e
l
eeeeeeeeee
output:
llllllllll
"""
if __name__ == '__main__':
    dict = {}
    dict1 = {}
    dict2 = {}
    dict3 = {}
    dict4 = {}
    dict5 = {}
    dict6 = {}
    dict7 = {}
    dict8 = {}
    dict9 = {}
    dict10 = {}
    dict11 = {}
    dict12 = {}
    dict13 = {}
    dict14 = {}
    dict15 = {}
    dict16 = {}
    dict17 = {}
    dict18 = {}
    dict19 = {}
    dict20 = {}
    dict21 = {}
    dict22 = {}
    dict23 = {}
    dict24 = {}
    dict25 = {}
    dict26 = {}
    dict27 = {}
    dict28 = {}
    dict29 = {}
    dict30 = {}
    dict31 = {}
    dict32 = {}
    dict33 = {}
    dict34 = {}
    dict35 = {}
    dict36 = {}
    dict37 = {}
    dict38 = {}
    dict39 = {}
    dict40 = {}
    dict41 = {}
    dict42 = {}
    dict43 = {}
    dict44 = {}
    dict45 = {}
    dict46 = {}
    dict47 = {}
    dict48 = {}
    dict49 = {}
    dict50 = {}
    dict51 = {}
    dict52 = {}
    dict53 = {}
    dict54 = {}
    dict55 = {}
    dict56 = {}
    dict57 = {}
    dict58 = {}
    dict59 = {}
    dict60 = {}
    dict61 = {}
    dict62 = {}
    dict63 = {}
    dict64 = {}
    dict65 = {}
    dict66 = {}
    dict67 = {}
    dict68 = {}
    dict69 = {}
    dict70 = {}
    dict71 = {}
    dict72 = {}
    dict73 = {}
    dict74 = {}
    dict75 = {}
    dict76 = {}
    dict77 = {}
    dict78 = {}
    dict79 = {}
    dict80 = {}
    dict81 = {}
    dict82 = {}
    dict83 = {}
    dict84 = {}
    dict85 = {}
    dict86 = {}
    dict87 = {}
    dict88 = {}
    dict89 = {}
    dict90 = {}
    dict91 = {}
    dict92 = {}
    dict93 = {}
    dict94 = {}
    dict95 = {}
    dict96 = {}
    dict97 = {}
    dict98 = {}
    dict99 = {}
    dict100 = {}
    dict101 = {}
    dict102 = {}
    dict103 = {}
    dict104 = {}
    dict105 = {}
    dict106 = {}
    dict107 = {}
    dict108 = {}
    dict109 = {}
    dict110 = {}
    dict111 = {}
    dict112 = {}
    dict113 = {}
    dict114 = {}
    dict115 = {}
    dict116 = {}
    dict117 = {}
    dict118 = {}
    dict119 = {}
    dict120 = {}
    dict121 = {}
    dict122 = {}
    dict123 = {}
    dict124 = {}
    dict125 = {}
    dict126 = {}
    dict127 = {}
    dict128 = {}
    dict129 = {}
    dict130 = {}
    dict131 = {}
    dict132 = {}
    dict133 = {}
    dict134 = {}
    dict135 = {}
    dict136 = {}
    dict137 = {}
    dict138 = {}
    dict139 = {}
    dict140 = {}
    dict141 = {}
    dict142 = {}
    dict143 = {}
    dict144 = {}
    dict145 = {}
    dict146 = {}
    dict147 = {}
    dict148 = {}
    dict149 = {}
    dict150 = {}
    dict151 = {}
    dict152 = {}
    dict153 = {}
    dict154 = {}
    dict155 = {}
    dict156 = {}
    dict157 = {}
    dict158 = {}
    dict159 = {}
    dict160 = {}
    dict161 = {}
    dict162 = {}
    dict163 = {}
    dict164 = {}
    dict165 = {}
    dict166 = {}
    dict167 = {}
    dict168 = {}
    dict169 = {}
    dict170 = {}
    dict171 = {}
    dict172 = {}
    dict173 = {}
    dict174 = {}
    dict175 = {}
    dict176 = {}
    dict177 = {}
    dict178 = {}
    dict179 = {}
    dict180 = {}
    dict181 = {}
    dict182 = {}
    dict183 = {}
    dict184 = {}
    dict185 = {}
    dict186 = {}
    dict187 = {}
    dict188 = {}
    dict189 = {}
    dict190 = {}
    dict191 = {}
    dict192 = {}
    dict193 = {}
    dict194 = {}
    dict195 = {}
    dict196 = {}
    dict197 = {}
    dict198 = {}
    dict199 = {}
    dict200 = {}
    dict201 = {}
    dict202 = {}
    dict203 = {}
    dict204 = {}
    dict205 = {}
    dict206 = {}
    dict207 = {}
    dict208 = {}
    dict209 = {}
    dict210 = {}
    dict211 = {}
    dict212 = {}
    dict213 = {}
    dict214 = {}
    dict215 = {}
    dict216 = {}
    dict217 = {}
    dict218 = {}
    dict219 = {}
    dict220 = {}
    dict221 = {}
    dict222 = {}
    dict223 = {}
    dict224 = {}
    dict225 = {}
    dict226 = {}
    dict227 = {}
    dict228 = {}
    dict229 = {}
    dict230 = {}
    dict231 = {}
    dict232 = {}
    dict233 = {}
    dict234 = {}
    dict235 = {}
    dict236 = {}
    dict237 = {}
    dict238 = {}
    dict239 = {}
    dict240 = {}
    dict241 = {}
    dict242 = {}
    dict243 = {}
    dict244 = {}
    dict245 = {}
    dict246 = {}
    dict247 = {}
    dict248 = {}
    dict249 = {}
    dict250 = {}
    dict251 = {}
    dict252 = {}
    dict253 = {}
    dict254 = {}
    dict255 = {}
    dict256 = {}
    dict257 = {}
    dict258 = {}
    dict259 = {}
    dict260 = {}
    dict261 = {}
    dict262 = {}
    dict263 = {}
    dict264 = {}
    dict265 = {}
    dict266 = {}
    dict267 = {}
    dict268 = {}
    dict269 = {}
    dict270 = {}
    dict271 = {}
    dict272 = {}
    dict273 = {}
    dict274 = {}
    dict275 = {}
    dict276 = {}
    dict277 = {}
    dict278 = {}
    dict279 = {}
    dict280 = {}
    dict281 = {}
    dict282 = {}
    dict283 = {}
    dict284 = {}
    dict285 = {}
    dict286 = {}
    dict287 = {}
    dict288 = {}
    dict289 = {}
    dict290 = {}
    dict291

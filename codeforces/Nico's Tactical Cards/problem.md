B. Niko's Tactical Cards
time limit per test1.5 seconds
memory limit per test256 megabytes
Niko is playing a game. Her score is denoted by an integer k
 which is 0
 initially.

 https://codeforces.com/contest/2173/problem/B

The game has n
 turns. On the i
-th turn, Niko is given a red card with an integer ai
 on it, as well as a blue card with an integer bi
 on it. She must choose exactly one of the cards and update her score according to her choice:

If she chooses the red card, her score becomes k−ai
, where k
 is her score before the turn.
If she chooses the blue card, her score becomes bi−k
, where k
 is her score before the turn.
After this, the game proceeds to the next turn, or ends if it is the n
-th turn.

Your task is to find the maximum possible score Niko can obtain at the end of the game.

Input
Each test contains multiple test cases. The first line contains the number of test cases t
 (1≤t≤103
). The description of the test cases follows.

The first line of each test case contains a single integer n
 (1≤n≤105
) — the number of turns.

The second line of each test case contains n
 integers a1,a2,…,an
 (−109≤ai≤109
).

The third line of each test case contains n
 integers b1,b2,…,bn
 (−109≤bi≤109
).

It is guaranteed that the sum of n
 over all test cases does not exceed 105
.

Output
For each test case, output a single integer — the maximum possible score Niko can obtain at the end of the game.

Example
InputCopy
3
3
4 -8 -1
-3 -7 0
5
-3 1 0 7 1
-5 3 -1 4 -5
5
-7 7 5 4 9
-9 -3 3 2 2
OutputCopy
6
12
27
Note
In the first test case, one optimal strategy is as follows:

Turn	0	1	2	3
Card Chosen	—	Blue	Red	Red
Score	0
−3−0=−3
−3−(−8)=5
5−(−1)=6
In the second test case, one optimal strategy is as follows:
Turn	0	1	2	3	4	5
Card Chosen	—	Blue	Blue	Blue	Blue	Red
Score	0
−5
8
−9
13
12

B. Battle of Arrays
time limit per test3 seconds
memory limit per test1024 megabytes

https://codeforces.com/problemset/problem/2181/B

Alice and Bob play a turn-based game. Initially, Alice has an array a
 of n
 positive integers, and Bob has an array b
 of m
 positive integers. The players take turns, with Alice moving first.

On a player's turn, they must choose one element x
 from their own array and the maximal element y
 from their opponent's array. Then they perform the following operation:

If y≤x
: the element y
 is destroyed (removed from the opponent's array).
If y>x
: the element y
 is decreased by x
 (the value of y
 becomes y−x
).
A player wins if, after their move, the opponent's array becomes empty.

Assuming both players play optimally, determine the winner.

Input
Each input contains multiple test cases. The first line contains the number of test cases t
 (1≤t≤105
).

The first line of each test case contains two integers n
 and m
 (1≤n,m≤105
) — the sizes of Alice's and Bob's arrays respectively.

The second line contains n
 integers a1,a2,…,an
 (1≤ai≤109
) — Alice's array.

The third line contains m
 integers b1,b2,…,bm
 (1≤bi≤109
) — Bob's array.

It is guaranteed that the sum of n
 over all test cases does not exceed 105
 and the sum of m
 over all test cases does not exceed 105
.

Output
For each test case, print the name of the winner of the game if both players follow the optimal strategy: "Alice" or "Bob".

Example
InputCopy
2
1 1
70
90
2 3
30 30
20 20 40
OutputCopy
Alice
Bob
Note
In the first test Alice moves and decreases Bob's element by 70
, so it becomes 20
. Then Bob moves and decreases Alice's element by 20
, so it becomes 50
. Finally, Alice moves, destroys Bob's element, and wins.



E. Number Maze
time limit per test1 second
memory limit per test256 megabytes

https://codeforces.com/contest/2172/problem/E

At the "Number Maze," a mysterious code master stands guard. He blocks the path and smiles, saying: "Brave adventurer, passing through this gate will not be easy! An ancient numeric code, capable of being rearranged into numerous combinations, is in the code master's possession. The traveler must choose two numeric codes from these combinations and show their x
Ay
B result, or the gate will trap the traveler here forever!"

The rules of x
Ay
B are as follows:

Each A indicates that a digit in both codes matches in both value and position.
Each B indicates that a digit in both codes matches in value but not position.
For example:

Codes Compared	Result	Explanation
5234 vs. 5789	1A0B	Only the digit 5
 matches in both value and position.
5634 vs. 6589	0A2B	Digits 5
 and 6
 match only in value but are in different positions.
1847 vs. 6149	1A1B	The digit 4
 matches in both value and position, while the digit 1
 only matches in value.
You are given a base numeric code n
, which can be one of {12,123,1234}
. Consider all possible permutations of the digits of n
, sorted in ascending order. Let the j
-th and k
-th permutations (1-indexed) be the two numeric codes chosen by the traveler.

Your task is to compare these two permutations and determine their x
Ay
B result, according to the rules above.

Input
Each test contains multiple test cases. The first line contains a single integer t
, representing the number of tests the code master will conduct. The description of the test cases follows.

The only line of each test case contains three integers n
, j
, and k
, representing the base numeric code and the indices of the two permutations to be compared, respectively.

1≤t≤1000
n∈{12,123,1234}
Both j
 and k
 are valid indices of permutations of the digits of n
.
Output
For each test case, output the result in the format x
Ay
B, where x
 and y
 are integers.

Examples
InputCopy
3
12 1 2
123 1 2
123 2 5
OutputCopy
0A2B
1A2B
1A2B
InputCopy
3
1234 15 9
1234 1 24
1234 1 1
OutputCopy
2A2B
0A4B
4A0B


<h2><a href="https://codeforces.com/contest/2169/problem/A" target="_blank" rel="noopener noreferrer">2169A — Alice and Bob</a></h2>

| | |
|---|---|
| **Difficulty** | 900 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 2169A](https://codeforces.com/contest/2169/problem/A) |

## Topics
`greedy` `implementation`

---

## Problem Statement

<div class="header"><div class="title">A. Alice and Bob</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>512 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Alice and Bob have a bag with $$$n$$$ marbles, with the integer $$$v_i$$$ written on the $$$i$$$-th marble. They play the following game: first, each player chooses an integer (let's denote the integer chosen by Alice as $$$a$$$, and the integer chosen by Bob as $$$b$$$). After that, they start drawing marbles from the bag in any order until the bag is empty. For each ball, the point goes to the one whose chosen integer is closer to the integer on the marble; <span class="tex-font-style-bf">in case of a tie, Alice gets the point</span>.</p><p>For example, if $$$a = 10$$$, $$$b = 30$$$, then</p><ul> <li> for marbles with integers $$$10, 1, 7, 18, 20$$$, and many others, Alice gets the points (note that she will get a point for the marble $$$20$$$); </li><li> for marble with integer $$$59, 25, 30, 21$$$, and many others, Bob gets the points. </li></ul><p>Bob has managed to find out in advance which integer Alice will choose. Help him to choose his integer in such a way as to maximize the number of points he receives.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains a single integer $$$t$$$ ($$$1 \le t \le 10^4$$$) — the number of test cases.</p><p>Each test case consists of two lines:</p><ul> <li> The first line contains two integers $$$n$$$ and $$$a$$$ ($$$1 \le n \le 3 \cdot 10^5$$$; $$$1 \le a \le 10^9$$$) — the number of marbles in the bag and the number chosen by Alice, respectively. </li><li> The second line contains $$$n$$$ integers $$$v_1, v_2, \dots, v_n$$$ ($$$1 \le v_1 \le v_2 \le \dots \le v_n \le 10^9$$$). </li></ul><p>Additional constraint on the input: the sum of $$$n$$$ across all test cases does not exceed $$$3 \cdot 10^5$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, output a single integer $$$b$$$ ($$$0 \le b \le 2 \cdot 10^9$$$) that Bob should choose to maximize the number of points he receives. If there are multiple such numbers, you may output any of them.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0032379500232921443" id="id0003888387252809" class="input-output-copier">Copy</div></div><pre id="id0032379500232921443">3
7 21
10 20 30 40 50 60 70
6 500
200 200 300 500 600 600
2 7
7 7
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id003199721391834891" id="id008418259361429363" class="input-output-copier">Copy</div></div><pre id="id003199721391834891">35
333
1337</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first test case, if Bob chooses $$$35$$$, he gets $$$5$$$ points for marbles $$$30, 40, 50, 60, 70$$$.</p><p>In the third test case, no matter which integer Bob chooses, he gets $$$0$$$ points.</p></div>
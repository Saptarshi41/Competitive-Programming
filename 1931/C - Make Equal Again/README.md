<h2><a href="https://codeforces.com/contest/1931/problem/C" target="_blank" rel="noopener noreferrer">1931C — Make Equal Again</a></h2>

| | |
|---|---|
| **Difficulty** | 1000 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1931C](https://codeforces.com/contest/1931/problem/C) |

## Topics
`brute force` `greedy` `math`

---

## Problem Statement

<div class="header"><div class="title">C. Make Equal Again</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You have an array $$$a$$$ of $$$n$$$ integers. </p><p>You can <span class="tex-font-style-bf">no more than once</span> apply the following operation: select three integers $$$i$$$, $$$j$$$, $$$x$$$ ($$$1 \le i \le j \le n$$$) and assign all elements of the array with indexes from $$$i$$$ to $$$j$$$ the value $$$x$$$. The price of this operation depends on the selected indices and is equal to $$$(j - i + 1)$$$ burles. </p><p>For example, the array is equal to $$$[1, 2, 3, 4, 5, 1]$$$. If we choose $$$i = 2, j = 4, x = 8$$$, then after applying this operation, the array will be equal to $$$[1, 8, 8, 8, 5, 1]$$$.</p><p>What is the least amount of burles you need to spend to make all the elements of the array equal?</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains a single integer $$$t$$$ ($$$1 \le t \le 10^4$$$) — the number of input test cases. The descriptions of the test cases follow.</p><p>The first line of the description of each test case contains a single integer $$$n$$$ ($$$1 \le n \le 2 \cdot 10 ^ 5$$$) — the size of the array.</p><p>The second line of the description of each test case contains $$$n$$$ integers $$$a_1, a_2, \dots, a_n$$$ ($$$1 \le a_i \le n$$$) — array elements.</p><p>It is guaranteed that the sum of $$$n$$$ for all test cases does not exceed $$$2 \cdot 10^5$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, output one integer — the minimum number of burles that will have to be spent to make all the elements of the array equal. It can be shown that this can always be done.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id007444034610497945" id="id005359445455760073" class="input-output-copier">Copy</div></div><pre id="id007444034610497945"><div class="test-example-line test-example-line-even test-example-line-0">8</div><div class="test-example-line test-example-line-odd test-example-line-1">6</div><div class="test-example-line test-example-line-odd test-example-line-1">1 2 3 4 5 1</div><div class="test-example-line test-example-line-even test-example-line-2">7</div><div class="test-example-line test-example-line-even test-example-line-2">1 1 1 1 1 1 1</div><div class="test-example-line test-example-line-odd test-example-line-3">8</div><div class="test-example-line test-example-line-odd test-example-line-3">8 8 8 1 2 8 8 8</div><div class="test-example-line test-example-line-even test-example-line-4">1</div><div class="test-example-line test-example-line-even test-example-line-4">1</div><div class="test-example-line test-example-line-odd test-example-line-5">2</div><div class="test-example-line test-example-line-odd test-example-line-5">1 2</div><div class="test-example-line test-example-line-even test-example-line-6">3</div><div class="test-example-line test-example-line-even test-example-line-6">1 2 3</div><div class="test-example-line test-example-line-odd test-example-line-7">7</div><div class="test-example-line test-example-line-odd test-example-line-7">4 3 2 7 1 1 3</div><div class="test-example-line test-example-line-even test-example-line-8">9</div><div class="test-example-line test-example-line-even test-example-line-8">9 9 2 9 2 5 5 5 3</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id008691583349626814" id="id001267304134356817" class="input-output-copier">Copy</div></div><pre id="id008691583349626814">4
0
2
0
1
2
6
7
</pre></div></div></div>
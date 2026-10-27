<h2><a href="https://codeforces.com/contest/2272/problem/A" target="_blank" rel="noopener noreferrer">2272A — Maximize One MEX</a></h2>

| | |
|---|---|
| **Difficulty** | Unrated |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 2272A](https://codeforces.com/contest/2272/problem/A) |

## Topics
`brute force`

---

## Problem Statement

<div class="header"><div class="title">A. Maximize One MEX</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>   </p><p>Given an array $$$a$$$ of length $$$n$$$, which is a permutation of the integers $$$0,1,\ldots,n-1$$$, you can perform the following operation <span class="tex-font-style-bf">at most</span> once: </p><ul> <li> Choose two distinct indices $$$i$$$ and $$$j$$$ ($$$i \ne j$$$), and swap the values of $$$a_i$$$ and $$$a_j$$$. </li></ul><p>After performing the operation, define $$$f_i=\operatorname{mex}(a_1, a_2, \ldots, a_i)$$$. $$$\operatorname{mex}(c)$$$ denotes the minimum excluded (MEX)$$$^{\text{∗}}$$$ of the collection $$$c$$$.</p><p>Given an integer $$$k$$$, find two indices to use in the operation above so as to maximize the $$$k$$$-th largest value among $$$f_1, f_2, \ldots, f_n$$$. If no operation is needed, output $$$-1$$$.</p><p>If there are several valid answers, you may output any of them.</p><div class="statement-footnote"><p>$$$^{\text{∗}}$$$The minimum excluded (MEX) of a collection of integers $$$c_1, c_2, \ldots, c_k$$$ is defined as the smallest non-negative integer $$$x$$$ which does not occur in the collection $$$c$$$.</p></div></div><div class="input-specification"><div class="section-title">Input</div><p>Each test contains multiple test cases. The first line contains the number of test cases $$$t$$$ ($$$1 \le t \le 50$$$). The description of the test cases follows.</p><p>For each test case, the first line contains two integers $$$n$$$ and $$$k$$$ ($$$2 \le n \le 100$$$, $$$1 \le k \le n$$$), where $$$n$$$ is the number of elements in the array $$$a$$$ and $$$k$$$ is the rank of the value to be maximized (with $$$k=1$$$ corresponding to the largest value).</p><p>The next line contains $$$n$$$ integers: $$$a_1,a_2,\ldots,a_n$$$. It is guaranteed that each of the values $$$0,1,\ldots,n−1$$$ appears exactly once in the array $$$a$$$.</p><p>It is guaranteed that the sum of $$$n$$$ over all test cases does not exceed $$$100$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, output a single line that contains two indices used in the operation to maximize the $$$k$$$-th largest value among $$$f_1, f_2, \ldots, f_n$$$. If no operation is needed, output $$$-1$$$.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id009964244764900211" id="id005187063308885222" class="input-output-copier">Copy</div></div><pre data-content="3
5 1
0 1 2 3 4
3 2
2 0 1
5 2
0 2 1 4 3
" id="id009964244764900211"><div class="test-example-line test-example-line-even test-example-line-0">3</div><div class="test-example-line test-example-line-odd test-example-line-1">5 1</div><div class="test-example-line test-example-line-odd test-example-line-1">0 1 2 3 4</div><div class="test-example-line test-example-line-even test-example-line-2">3 2</div><div class="test-example-line test-example-line-even test-example-line-2">2 0 1</div><div class="test-example-line test-example-line-odd test-example-line-3">5 2</div><div class="test-example-line test-example-line-odd test-example-line-3">0 2 1 4 3</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0010567466424110705" id="id00783537521351087" class="input-output-copier">Copy</div></div><pre data-content="-1
1 3
4 5
" id="id0010567466424110705"><div class="test-example-line test-example-line-odd test-example-line-1">-1</div><div class="test-example-line test-example-line-even test-example-line-2">1 3</div><div class="test-example-line test-example-line-odd test-example-line-3">4 5</div></pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first test case, no operation is needed; the $$$1$$$st largest value among $$$f_1, f_2, \ldots, f_5$$$ is $$$f_5=5$$$. Actually, if we perform the swap operation, no matter which two indices we choose, $$$f_5$$$ is always the largest one, with value $$$5$$$.</p><p>In the second test case, after swapping $$$a_1$$$ and $$$a_3$$$, we get the array $$$[1,0,2]$$$, and $$$f_1=0, f_2=2, f_3=3$$$; the $$$2$$$nd largest value among $$$f_1, f_2, f_3$$$ is $$$f_2=2$$$.</p></div>
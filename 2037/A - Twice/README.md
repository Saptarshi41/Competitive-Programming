<h2><a href="https://codeforces.com/contest/2037/problem/A" target="_blank" rel="noopener noreferrer">2037A — Twice</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 2037A](https://codeforces.com/contest/2037/problem/A) |

## Topics
`implementation`

---

## Problem Statement

<div class="header"><div class="title">A. Twice</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p><span class="tex-font-style-it">Kinich wakes up to the start of a new day. He turns on his phone, checks his mailbox, and finds a mysterious present. He decides to unbox the present.</span></p><p>Kinich unboxes an array $$$a$$$ with $$$n$$$ integers. Initially, Kinich's score is $$$0$$$. He will perform the following operation any number of times:</p><ul> <li> Select two indices $$$i$$$ and $$$j$$$ $$$(1 \leq i  \lt  j \leq n)$$$ such that neither $$$i$$$ nor $$$j$$$ has been chosen in any previous operation and $$$a_i = a_j$$$. Then, add $$$1$$$ to his score. </li></ul><p>Output the maximum score Kinich can achieve after performing the aforementioned operation any number of times.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains an integer $$$t$$$ ($$$1 \leq t \leq 500$$$) — the number of test cases.</p><p>The first line of each test case contains an integer $$$n$$$ ($$$1 \leq n \leq 20$$$) — the length of $$$a$$$.</p><p>The following line of each test case contains $$$n$$$ space-separated integers $$$a_1, a_2, \ldots, a_n$$$ ($$$1 \leq a_i \leq n$$$).</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, output the maximum score achievable on a new line.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0028096074144489835" id="id002591773917152712" class="input-output-copier">Copy</div></div><pre id="id0028096074144489835"><div class="test-example-line test-example-line-even test-example-line-0">5</div><div class="test-example-line test-example-line-odd test-example-line-1">1</div><div class="test-example-line test-example-line-odd test-example-line-1">1</div><div class="test-example-line test-example-line-even test-example-line-2">2</div><div class="test-example-line test-example-line-even test-example-line-2">2 2</div><div class="test-example-line test-example-line-odd test-example-line-3">2</div><div class="test-example-line test-example-line-odd test-example-line-3">1 2</div><div class="test-example-line test-example-line-even test-example-line-4">4</div><div class="test-example-line test-example-line-even test-example-line-4">1 2 3 1</div><div class="test-example-line test-example-line-odd test-example-line-5">6</div><div class="test-example-line test-example-line-odd test-example-line-5">1 2 3 1 2 3</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0044043001649687363" id="id006435999987272227" class="input-output-copier">Copy</div></div><pre id="id0044043001649687363">0
1
0
1
3
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first and third testcases, Kinich cannot perform any operations.</p><p>In the second testcase, Kinich can perform one operation with $$$i=1$$$ and $$$j=2$$$.</p><p>In the fourth testcase, Kinich can perform one operation with $$$i=1$$$ and $$$j=4$$$. </p></div>
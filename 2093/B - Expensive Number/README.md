<h2><a href="https://codeforces.com/contest/2093/problem/B" target="_blank" rel="noopener noreferrer">2093B — Expensive Number</a></h2>

| | |
|---|---|
| **Difficulty** | 900 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 2093B](https://codeforces.com/contest/2093/problem/B) |

## Topics
`greedy` `math`

---

## Problem Statement

<div class="header"><div class="title">B. Expensive Number</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>The cost of a positive integer $$$n$$$ is defined as the result of dividing the number $$$n$$$ by the sum of its digits.</p><p>For example, the cost of the number $$$104$$$ is $$$\frac{104}{1 + 0 + 4} = 20.8$$$, and the cost of the number $$$111$$$ is $$$\frac{111}{1 + 1 + 1} = 37$$$.</p><p>You are given a positive integer $$$n$$$ that does not contain leading zeros. You can remove any number of digits from the number $$$n$$$ (including none) so that the remaining number contains at least one digit and <span class="tex-font-style-bf">is strictly greater than zero</span>. The remaining digits <span class="tex-font-style-bf">cannot</span> be rearranged. As a result, you <span class="tex-font-style-bf">may</span> end up with a number that has leading zeros.</p><p>For example, you are given the number $$$103554$$$. If you decide to remove the digits $$$1$$$, $$$4$$$, and one digit $$$5$$$, you will end up with the number $$$035$$$, whose cost is $$$\frac{035}{0 + 3 + 5} = 4.375$$$.</p><p>What is the minimum number of digits you need to remove from the number so that its cost becomes the minimum possible?</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains an integer $$$t$$$ ($$$1 \leq t \leq 1000$$$) — the number of test cases.</p><p>The only line of each test case contains a positive integer $$$n$$$ ($$$1 \leq n  \lt  10^{100}$$$) without leading zeros.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, output one integer on a new line — the number of digits that need to be removed from the number so that its cost becomes minimal.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id003098199896038375" id="id006260977215772259" class="input-output-copier">Copy</div></div><pre id="id003098199896038375"><div class="test-example-line test-example-line-even test-example-line-0">4</div><div class="test-example-line test-example-line-odd test-example-line-1">666</div><div class="test-example-line test-example-line-even test-example-line-2">13700</div><div class="test-example-line test-example-line-odd test-example-line-3">102030</div><div class="test-example-line test-example-line-even test-example-line-4">7</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0012269983495257863" id="id003867842519738367" class="input-output-copier">Copy</div></div><pre id="id0012269983495257863">2
4
3
0
</pre></div></div></div>
<h2><a href="https://codeforces.com/contest/1873/problem/A" target="_blank" rel="noopener noreferrer">1873A — Short Sort</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1873A](https://codeforces.com/contest/1873/problem/A) |

## Topics
`brute force` `implementation`

---

## Problem Statement

<div class="header"><div class="title">A. Short Sort</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>There are three cards with letters $$$\texttt{a}$$$, $$$\texttt{b}$$$, $$$\texttt{c}$$$ placed in a row in some order. You can do the following operation <span class="tex-font-style-bf">at most once</span>: </p><ul> <li> Pick two cards, and swap them. </li></ul> Is it possible that the row becomes $$$\texttt{abc}$$$ after the operation? Output "<span class="tex-font-style-tt">YES</span>" if it is possible, and "<span class="tex-font-style-tt">NO</span>" otherwise.</div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains a single integer $$$t$$$ ($$$1 \leq t \leq 6$$$) — the number of test cases.</p><p>The only line of each test case contains a single string consisting of each of the three characters $$$\texttt{a}$$$, $$$\texttt{b}$$$, and $$$\texttt{c}$$$ exactly once, representing the cards.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, output "<span class="tex-font-style-tt">YES</span>" if you can make the row $$$\texttt{abc}$$$ with at most one operation, or "<span class="tex-font-style-tt">NO</span>" otherwise.</p><p>You can output the answer in any case (for example, the strings "<span class="tex-font-style-tt">yEs</span>", "<span class="tex-font-style-tt">yes</span>", "<span class="tex-font-style-tt">Yes</span>" and "<span class="tex-font-style-tt">YES</span>" will be recognized as a positive answer).</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0016505134874736616" id="id001543193020357192" class="input-output-copier">Copy</div></div><pre id="id0016505134874736616"><div class="test-example-line test-example-line-even test-example-line-0">6</div><div class="test-example-line test-example-line-odd test-example-line-1">abc</div><div class="test-example-line test-example-line-even test-example-line-2">acb</div><div class="test-example-line test-example-line-odd test-example-line-3">bac</div><div class="test-example-line test-example-line-even test-example-line-4">bca</div><div class="test-example-line test-example-line-odd test-example-line-5">cab</div><div class="test-example-line test-example-line-even test-example-line-6">cba</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id00803657992792369" id="id007658775268357394" class="input-output-copier">Copy</div></div><pre id="id00803657992792369">YES
YES
YES
NO
NO
YES
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first test case, we don't need to do any operations, since the row is already $$$\texttt{abc}$$$.</p><p>In the second test case, we can swap $$$\texttt{c}$$$ and $$$\texttt{b}$$$: $$$\texttt{acb} \to \texttt{abc}$$$.</p><p>In the third test case, we can swap $$$\texttt{b}$$$ and $$$\texttt{a}$$$: $$$\texttt{bac} \to \texttt{abc}$$$.</p><p>In the fourth test case, it is impossible to make $$$\texttt{abc}$$$ using <span class="tex-font-style-bf">at most one</span> operation.</p></div>
<h2><a href="https://codeforces.com/contest/1108/problem/A" target="_blank" rel="noopener noreferrer">1108A — Two distinct points</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1108A](https://codeforces.com/contest/1108/problem/A) |

## Topics
`implementation`

---

## Problem Statement

<div class="header"><div class="title">A. Two distinct points</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You are given two segments $$$[l_1; r_1]$$$ and $$$[l_2; r_2]$$$ on the $$$x$$$-axis. It is guaranteed that $$$l_1  \lt  r_1$$$ and $$$l_2  \lt  r_2$$$. Segments <span class="tex-font-style-bf">may intersect, overlap or even coincide with each other</span>.</p><center> <img class="tex-graphics" src="https://espresso.codeforces.com/24eae3ff89124cd26283ee2d610c1ddf9d9c7c14.png" style="max-width: 100.0%;max-height: 100.0%;">   <span class="tex-font-size-small">The example of two segments on the $$$x$$$-axis.</span> </center><p>Your problem is to find two <span class="tex-font-style-bf">integers</span> $$$a$$$ and $$$b$$$ such that $$$l_1 \le a \le r_1$$$, $$$l_2 \le b \le r_2$$$ and $$$a \ne b$$$. In other words, you have to choose two <span class="tex-font-style-bf">distinct</span> integer points in such a way that the first point belongs to the segment $$$[l_1; r_1]$$$ and the second one belongs to the segment $$$[l_2; r_2]$$$.</p><p>It is guaranteed that <span class="tex-font-style-bf">the answer exists</span>. If there are multiple answers, you can print <span class="tex-font-style-bf">any</span> of them.</p><p>You have to answer $$$q$$$ independent queries.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line of the input contains one integer $$$q$$$ ($$$1 \le q \le 500$$$) — the number of queries.</p><p>Each of the next $$$q$$$ lines contains four integers $$$l_{1_i}, r_{1_i}, l_{2_i}$$$ and $$$r_{2_i}$$$ ($$$1 \le l_{1_i}, r_{1_i}, l_{2_i}, r_{2_i} \le 10^9, l_{1_i}  \lt  r_{1_i}, l_{2_i}  \lt  r_{2_i}$$$) — the ends of the segments in the $$$i$$$-th query.</p></div><div class="output-specification"><div class="section-title">Output</div><p>Print $$$2q$$$ integers. For the $$$i$$$-th query print two integers $$$a_i$$$ and $$$b_i$$$ — such numbers that $$$l_{1_i} \le a_i \le r_{1_i}$$$, $$$l_{2_i} \le b_i \le r_{2_i}$$$ and $$$a_i \ne b_i$$$. Queries are numbered in order of the input.</p><p>It is guaranteed that <span class="tex-font-style-bf">the answer exists</span>. If there are multiple answers, you can print <span class="tex-font-style-bf">any</span>.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id006959393093472228" id="id007340954222252756" class="input-output-copier">Copy</div></div><pre id="id006959393093472228">5
1 2 1 2
2 6 3 4
2 4 1 3
1 2 1 3
1 4 5 8
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id009797594879910558" id="id005671841889656752" class="input-output-copier">Copy</div></div><pre id="id009797594879910558">2 1
3 4
3 2
1 2
3 7
</pre></div></div></div>
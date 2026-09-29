<h2><a href="https://codeforces.com/contest/2051/problem/B" target="_blank" rel="noopener noreferrer">2051B — Journey</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 2051B](https://codeforces.com/contest/2051/problem/B) |

## Topics
`binary search` `math`

---

## Problem Statement

<div class="header"><div class="title">B. Journey</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Monocarp decided to embark on a long hiking journey.</p><p>He decided that on the first day he would walk $$$a$$$ kilometers, on the second day he would walk $$$b$$$ kilometers, on the third day he would walk $$$c$$$ kilometers, on the fourth day, just like on the first, he would walk $$$a$$$ kilometers, on the fifth day, just like on the second, he would walk $$$b$$$ kilometers, on the sixth day, just like on the third, he would walk $$$c$$$ kilometers, and so on.</p><p>Monocarp will complete his journey on the day when he has walked at least $$$n$$$ kilometers in total. Your task is to determine the day on which Monocarp will complete his journey.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains one integer $$$t$$$ ($$$1 \le t \le 10^4$$$) — the number of test cases.</p><p>Each test case consists of one line containing four integers $$$n$$$, $$$a$$$, $$$b$$$, $$$c$$$ ($$$1 \le n \le 10^9$$$; $$$1 \le a, b, c \le 10^6$$$).</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, output one integer — the day on which Monocarp will have walked at least $$$n$$$ kilometers in total and will complete his journey.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id006531508800559456" id="id001513779953369796" class="input-output-copier">Copy</div></div><pre id="id006531508800559456"><div class="test-example-line test-example-line-even test-example-line-0">4</div><div class="test-example-line test-example-line-odd test-example-line-1">12 1 5 3</div><div class="test-example-line test-example-line-even test-example-line-2">6 6 7 4</div><div class="test-example-line test-example-line-odd test-example-line-3">16 3 4 1</div><div class="test-example-line test-example-line-even test-example-line-4">1000000000 1 1 1</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0017950620628078717" id="id006305613842304922" class="input-output-copier">Copy</div></div><pre id="id0017950620628078717">5
1
6
1000000000
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first example, over the first four days, Monocarp will cover $$$1 + 5 + 3 + 1 = 10$$$ kilometers. On the fifth day, he will cover another $$$5$$$ kilometers, meaning that in total over five days he will have covered $$$10 + 5 = 15$$$ kilometers. Since $$$n = 12$$$, Monocarp will complete his journey on the fifth day.</p><p>In the second example, Monocarp will cover $$$6$$$ kilometers on the first day. Since $$$n = 6$$$, Monocarp will complete his journey on the very first day.</p><p>In the third example, Monocarp will cover $$$3 + 4 + 1 + 3 + 4 + 1 = 16$$$ kilometers over the first six days. Since $$$n = 16$$$, Monocarp will complete his journey on the sixth day.</p></div>
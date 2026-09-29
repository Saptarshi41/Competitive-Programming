<h2><a href="https://codeforces.com/contest/1931/problem/A" target="_blank" rel="noopener noreferrer">1931A — Recovering a Small String</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1931A](https://codeforces.com/contest/1931/problem/A) |

## Topics
`brute force` `strings`

---

## Problem Statement

<div class="header"><div class="title">A. Recovering a Small String</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Nikita had a word consisting of exactly $$$3$$$ lowercase Latin letters. The letters in the Latin alphabet are numbered from $$$1$$$ to $$$26$$$, where the letter "<span class="tex-font-style-tt">a</span>" has the index $$$1$$$, and the letter "<span class="tex-font-style-tt">z</span>" has the index $$$26$$$.</p><p>He encoded this word as the sum of the positions of all the characters in the alphabet. For example, the word "<span class="tex-font-style-tt">cat</span>" he would encode as the integer $$$3 + 1 + 20 = 24$$$, because the letter "<span class="tex-font-style-tt">c</span>" has the index $$$3$$$ in the alphabet, the letter "<span class="tex-font-style-tt">a</span>" has the index $$$1$$$, and the letter "<span class="tex-font-style-tt">t</span>" has the index $$$20$$$.</p><p>However, this encoding turned out to be ambiguous! For example, when encoding the word "<span class="tex-font-style-tt">ava</span>", the integer $$$1 + 22 + 1 = 24$$$ is also obtained.</p><p>Determine the lexicographically smallest word of $$$3$$$ letters that could have been encoded.</p><p>A string $$$a$$$ is lexicographically smaller than a string $$$b$$$ if and only if one of the following holds:</p><ul><li> $$$a$$$ is a prefix of $$$b$$$, but $$$a \ne b$$$;</li><li> in the first position where $$$a$$$ and $$$b$$$ differ, the string $$$a$$$ has a letter that appears earlier in the alphabet than the corresponding letter in $$$b$$$.</li></ul></div><div class="input-specification"><div class="section-title">Input</div><p>The first line of the input contains a single integer $$$t$$$ ($$$1 \le t \le 100$$$) — the number of test cases in the test.</p><p>This is followed by the descriptions of the test cases.</p><p>The first and only line of each test case contains an integer $$$n$$$ ($$$3 \le n \le 78$$$) — the encoded word.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, output the lexicographically smallest three-letter word that could have been encoded on a separate line.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id005497451427977067" id="id0010728366696809755" class="input-output-copier">Copy</div></div><pre id="id005497451427977067"><div class="test-example-line test-example-line-even test-example-line-0">5</div><div class="test-example-line test-example-line-odd test-example-line-1">24</div><div class="test-example-line test-example-line-even test-example-line-2">70</div><div class="test-example-line test-example-line-odd test-example-line-3">3</div><div class="test-example-line test-example-line-even test-example-line-4">55</div><div class="test-example-line test-example-line-odd test-example-line-5">48</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id000623110168909039" id="id003280484368702534" class="input-output-copier">Copy</div></div><pre id="id000623110168909039">aav
rzz
aaa
czz
auz
</pre></div></div></div>
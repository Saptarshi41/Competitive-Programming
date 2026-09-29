<h2><a href="https://codeforces.com/contest/1199/problem/B" target="_blank" rel="noopener noreferrer">1199B — Water Lily</a></h2>

| | |
|---|---|
| **Difficulty** | 1000 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1199B](https://codeforces.com/contest/1199/problem/B) |

## Topics
`geometry` `math`

---

## Problem Statement

<div class="header"><div class="title">B. Water Lily</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>While sailing on a boat, Inessa noticed a beautiful water lily flower above the lake's surface. She came closer and it turned out that the lily was exactly $$$H$$$ centimeters above the water surface. Inessa grabbed the flower and sailed the distance of $$$L$$$ centimeters. Exactly at this point the flower touched the water surface.</p><center> <img class="tex-graphics" src="https://espresso.codeforces.com/72bfc654b0e27860232cc343c81653b4597abd10.png" style="max-width: 100.0%;max-height: 100.0%;"> </center><p>Suppose that the lily grows at some point $$$A$$$ on the lake bottom, and its stem is always a straight segment with one endpoint at point $$$A$$$. Also suppose that initially the flower was exactly above the point $$$A$$$, i.e. its stem was vertical. Can you determine the depth of the lake at point $$$A$$$?</p></div><div class="input-specification"><div class="section-title">Input</div><p>The only line contains two integers $$$H$$$ and $$$L$$$ ($$$1 \le H  \lt  L \le 10^{6}$$$).</p></div><div class="output-specification"><div class="section-title">Output</div><p>Print a single number — the depth of the lake at point $$$A$$$. The absolute or relative error should not exceed $$$10^{-6}$$$.</p><p>Formally, let your answer be $$$A$$$, and the jury's answer be $$$B$$$. Your answer is accepted if and only if $$$\frac{|A - B|}{\max{(1, |B|)}} \le 10^{-6}$$$.</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id004406496926550192" id="id009287177013543009" class="input-output-copier">Copy</div></div><pre id="id004406496926550192">1 2
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id009159102573465447" id="id0023615287395924134" class="input-output-copier">Copy</div></div><pre id="id009159102573465447">1.5000000000000
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0020769591618356342" id="id006134788774290831" class="input-output-copier">Copy</div></div><pre id="id0020769591618356342">3 5
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id000320378030511872" id="id005989211935268703" class="input-output-copier">Copy</div></div><pre id="id000320378030511872">2.6666666666667
</pre></div></div></div>
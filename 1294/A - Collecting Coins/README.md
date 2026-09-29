<h2><a href="https://codeforces.com/contest/1294/problem/A" target="_blank" rel="noopener noreferrer">1294A — Collecting Coins</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1294A](https://codeforces.com/contest/1294/problem/A) |

## Topics
`math`

---

## Problem Statement

<div class="header"><div class="title">A. Collecting Coins</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Polycarp has three sisters: Alice, Barbara, and Cerene. They're collecting coins. Currently, Alice has $$$a$$$ coins, Barbara has $$$b$$$ coins and Cerene has $$$c$$$ coins. Recently Polycarp has returned from the trip around the world and brought $$$n$$$ coins.</p><p>He wants to distribute <span class="tex-font-style-bf">all</span> these $$$n$$$ coins between his sisters in such a way that the number of coins Alice has is equal to the number of coins Barbara has and is equal to the number of coins Cerene has. In other words, if Polycarp gives $$$A$$$ coins to Alice, $$$B$$$ coins to Barbara and $$$C$$$ coins to Cerene ($$$A+B+C=n$$$), then $$$a + A = b + B = c + C$$$.</p><p><span class="tex-font-style-bf">Note</span> that A, B or C (the number of coins Polycarp gives to Alice, Barbara and Cerene correspondingly) can be 0.</p><p>Your task is to find out if it is possible to distribute <span class="tex-font-style-bf">all</span> $$$n$$$ coins between sisters in a way described above.</p><p>You have to answer $$$t$$$ independent test cases.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line of the input contains one integer $$$t$$$ ($$$1 \le t \le 10^4$$$) — the number of test cases.</p><p>The next $$$t$$$ lines describe test cases. Each test case is given on a new line and consists of four space-separated integers $$$a, b, c$$$ and $$$n$$$ ($$$1 \le a, b, c, n \le 10^8$$$) — the number of coins Alice has, the number of coins Barbara has, the number of coins Cerene has and the number of coins Polycarp has.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, print "<span class="tex-font-style-tt">YES</span>" if Polycarp can distribute <span class="tex-font-style-bf">all</span> $$$n$$$ coins between his sisters and "<span class="tex-font-style-tt">NO</span>" otherwise.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id00606625044355118" id="id0016739566649581117" class="input-output-copier">Copy</div></div><pre id="id00606625044355118">5
5 3 2 8
100 101 102 105
3 2 1 100000000
10 20 15 14
101 101 101 3
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id002530349211404679" id="id0046434167283953287" class="input-output-copier">Copy</div></div><pre id="id002530349211404679">YES
YES
NO
NO
YES
</pre></div></div></div>
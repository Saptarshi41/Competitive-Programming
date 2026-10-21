<h2><a href="https://codeforces.com/contest/1285/problem/A" target="_blank" rel="noopener noreferrer">1285A — Mezo Playing Zoma</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1285A](https://codeforces.com/contest/1285/problem/A) |

## Topics
`math`

---

## Problem Statement

<div class="header"><div class="title">A. Mezo Playing Zoma</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Today, Mezo is playing a game. Zoma, a character in that game, is initially at position $$$x = 0$$$. Mezo starts sending $$$n$$$ commands to Zoma. There are two possible commands:</p><ul> <li> 'L' (Left) sets the position $$$x: =x - 1$$$; </li><li> 'R' (Right) sets the position $$$x: =x + 1$$$. </li></ul><p>Unfortunately, Mezo's controller malfunctions sometimes. Some commands are sent successfully and some are ignored. If the command is ignored then the position $$$x$$$ doesn't change and Mezo simply proceeds to the next command.</p><p>For example, if Mezo sends commands "<span class="tex-font-style-tt">LRLR</span>", then here are some possible outcomes (underlined commands are sent successfully): </p><ul> <li> "<span class="tex-font-style-tt"><span class="tex-font-style-underline">LRLR</span></span>" — Zoma moves to the left, to the right, to the left again and to the right for the final time, ending up at position $$$0$$$; </li><li> "<span class="tex-font-style-tt">LRLR</span>" — Zoma recieves no commands, doesn't move at all and ends up at position $$$0$$$ as well; </li><li> "<span class="tex-font-style-tt"><span class="tex-font-style-underline">L</span>R<span class="tex-font-style-underline">L</span>R</span>" — Zoma moves to the left, then to the left again and ends up in position $$$-2$$$. </li></ul><p>Mezo doesn't know which commands will be sent successfully beforehand. Thus, he wants to know how many different positions may Zoma end up at.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains $$$n$$$ $$$(1 \le n \le 10^5)$$$ — the number of commands Mezo sends.</p><p>The second line contains a string $$$s$$$ of $$$n$$$ commands, each either 'L' (Left) or 'R' (Right).</p></div><div class="output-specification"><div class="section-title">Output</div><p>Print one integer — the number of different positions Zoma may end up at.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id008117290004664016" id="id006807051400482452" class="input-output-copier">Copy</div></div><pre id="id008117290004664016">4
LRLR
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0048183058376786636" id="id002538356971836042" class="input-output-copier">Copy</div></div><pre id="id0048183058376786636">5
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the example, Zoma may end up anywhere between $$$-2$$$ and $$$2$$$.</p></div>
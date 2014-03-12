#!/usr/bin/env gnuplot
set term pdf
set output "search1.pdf"
plot "search1.data" w linespoints

set output "search2.pdf"
plot "search2.data" w linespoints

set output "searching.pdf"
plot "search1.data" w linespoints, "search2.data" w linespoints


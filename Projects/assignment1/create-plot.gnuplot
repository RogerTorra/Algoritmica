#!/usr/bin/env gnuplot
set term pdf
set output "smartdb-iteratiu.pdf"
plot "smartdb-iteratiu.data" w linespoints

set output "smartdb-recursiu.pdf"
plot "smartdb-recursiu.data" w linespoints


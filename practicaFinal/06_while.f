
variable cnt
0 cnt !
: main begin
	cnt @ 3 <
while
	cnt @ .
cnt @ 1 + cnt !
repeat ;
main

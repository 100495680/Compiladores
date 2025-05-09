
variable i
0 i !
variable suma
0 suma !
variable n
5 n !
: main 0 i !
begin
	i @ n @ <
while
	suma @ i @ + suma !
i @ 1 + i !
repeat
suma @ . ;
main

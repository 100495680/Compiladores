
variable v
5 v !
variable res
0 res !
: main v @ 2 mod 0 = if 
	." Par" 
else 
	." Impar" 
then
v @ 10 > if 
	." Grande" 
then ;
main

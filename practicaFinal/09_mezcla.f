
variable a
0 a !
variable b
10 b !
variable c
0 c !
: main a @ 0 = b @ 0 = or c @ 0 = or if 
	." || ||" 
then
a @ 0 = b @ 0 = and c @ 1 = or if 
	." && ||" 
then
a @ 0 = b @ 0 = and c @ 0 = and if 
	." && &&" 
then
a @ 0 = b @ 0 = c @ 1 = and or if 
	." || &&" 
then
a @ 0 = b @ 0 = or if 
	." ||" 
then
a @ 0 = b @ 0 = and if 
	." &&" 
then
a @ 0 = 0= if 
	." !=" 
then
a @ 0 = if 
	." ==" 
then
a @ 0 > if 
	." >" 
then
a @ 0 < if 
	." <" 
then
a @ 0 >= if 
	." >=" 
then
a @ 0 <= if 
	." <=" 
then
b @ c @ + a !
." Operacion a = b + c"
." Valor de a:"
a @ .
b @ c @ - a !
." Operacion a = b - c"
." Valor de a:"
a @ .
b @ c @ * a !
." Operacion a = b * c"
." Valor de a:"
a @ .
b @ 3 / a !
." Operacion a = b / 3"
." Valor de a:"
a @ .
b @ 10 mod a !
." Operacion a = b % 10"
." Valor de a:"
a @ .
b @ 0= a !
." Operacion a = !b"
." Valor de a:"
a @ .
29 a !
." Operacion a = +29"
." Valor de a:"
a @ .
1 negate a !
." Operacion a = -1"
." Valor de a:"
a @ .
begin
	a @ 5 <
while
	." while"
a @ 1 + a !
repeat
a @ 2 mod if 
	." PAR" 
else 
	." IMPAR" 
then ;
main

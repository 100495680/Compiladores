# labs_PL

/* 113 Liang Ji Zhu Ignacio Leal Sánchez */
/* 100495723@alumnos.uc3m.es 100495680@alumnos.uc3m.es */

Comandos:
* -> calc
- bison *.y
- gcc *.tab.c –o *
- ./*

Comandos:
* -> calc + lex
- bison *.y -d
- flex calc4.lex
- gcc lex.yy.c calc4.tab.c -o calc4 
- ./*
[English](README.en.md) || **Español** || [简体中文](README.zh-CN.md)

## Compiladores — prácticas y laboratorio

Repositorio de prácticas/labs de la asignatura de **Procesadores de Lenguajes / Compiladores**. Incluye ejemplos con **Bison/Flex** y varias prácticas donde se traduce un subconjunto de C a otros lenguajes/intermedios.

## Requisitos

- **gcc**
- **bison**
- **flex** (solo en las prácticas/labs que lo usan, p.ej. `lab4`)
- **bash**
- **clisp** (usado en `practica4/run_tests.sh` para ejecutar el LISP generado)

## Estructura del repositorio (alto nivel)

- **`lab1..lab5/`**: ejercicios de laboratorio (calc con bison; en `lab4` se usa flex).
- **`practica1..practica5/`**: prácticas incrementales, con tests y scripts de ejecución.
- **`practicaFinal/`**: proyecto final con un “frontend” (`trad.y`) y un “backend” (`back.y`) + scripts de tests.
- **`practicaFinalEntregable/`**: versión “entregable” del proyecto final.

## Cómo ejecutar (rápido)

### Proyecto final (`practicaFinal/`)

Compila `trad.y` y `back.y`, y ejecuta los tests de `tests/00`:

```bash
bash practicaFinal/run_tests_00.sh
```

Notas:
- `trad` lee un `.c` por `stdin` y emite un **intermedio** (estilo LISP) por `stdout`.
- `back` lee ese intermedio por `stdin` y genera la salida final por `stdout`.

### Práctica 4 (`practica4/`)

Traduce tests a LISP y los ejecuta con CLISP, guardando resultados en `practica4/resultados/`:

```bash
bash practica4/run_tests.sh
```

### Práctica 5 (`practica5/`)

Ejecuta un caso de prueba simple para el backend:

```bash
bash practica5/run_test.sh
```

## Compilación manual (referencia)

### Bison (sin flex)

```bash
bison archivo.y
gcc archivo.tab.c -o salida
./salida
```

### Bison + Flex (ejemplo tipo `lab4/`)

```bash
bison -d calc4.y
flex calc4.lex
gcc lex.yy.c calc4.tab.c -o calc4
./calc4
```
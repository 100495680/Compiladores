**English** || [Español](README.md) || [简体中文](README.zh-CN.md)

## Compilers — labs and assignments

This repository contains labs/assignments for a **Programming Languages / Compilers** course. It includes **Bison/Flex** examples and several practices where a subset of C is translated into other intermediate/target forms.

## Requirements

- **gcc**
- **bison**
- **flex** (only for the labs/practices that use it, e.g. `lab4`)
- **bash**
- **clisp** (used by `practica4/run_tests.sh` to run the generated LISP)

## Repository layout (high level)

- **`lab1..lab5/`**: lab exercises (calculator with bison; `lab4` uses flex).
- **`practica1..practica5/`**: incremental assignments, with tests and run scripts.
- **`practicaFinal/`**: final project with a “frontend” (`trad.y`) and a “backend” (`back.y`) + test scripts.
- **`practicaFinalEntregable/`**: “deliverable” version of the final project.

## Quick start

### Final project (`practicaFinal/`)

Builds `trad.y` and `back.y`, then runs the tests in `tests/00`:

```bash
bash practicaFinal/run_tests_00.sh
```

Notes:
- `trad` reads a `.c` program from **stdin** and prints an **intermediate** (LISP-like) representation to **stdout**.
- `back` reads that intermediate from **stdin** and prints the final output to **stdout**.

### Assignment 4 (`practica4/`)

Translates tests to LISP and executes them with CLISP, saving results under `practica4/resultados/`:

```bash
bash practica4/run_tests.sh
```

### Assignment 5 (`practica5/`)

Runs a small backend test case:

```bash
bash practica5/run_test.sh
```

## Manual build (reference)

### Bison (no flex)

```bash
bison file.y
gcc file.tab.c -o output
./output
```

### Bison + Flex (example like `lab4/`)

```bash
bison -d calc4.y
flex calc4.lex
gcc lex.yy.c calc4.tab.c -o calc4
./calc4
```

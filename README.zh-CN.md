[English](README.en.md) || [Español](README.md) || **简体中文**

## 编译原理 / 编译器 —— 实验与作业

本仓库包含 **编译原理/语言处理** 课程的实验与实践作业代码。主要内容包括 **Bison/Flex** 示例，以及将 C 的一个子集翻译到中间形式/目标形式的若干实践。

## 环境依赖

- **gcc**
- **bison**
- **flex**（仅在使用到的实验/实践中需要，例如 `lab4`）
- **bash**
- **clisp**（`practica4/run_tests.sh` 用于执行生成的 LISP 代码）

## 目录结构（概览）

- **`lab1..lab5/`**：实验（用 bison 做 calculator；`lab4` 使用 flex）。
- **`practica1..practica5/`**：阶段性实践作业，带测试与脚本。
- **`practicaFinal/`**：期末项目，包含“前端”(`trad.y`) 与“后端”(`back.y`) 及测试脚本。
- **`practicaFinalEntregable/`**：期末项目的“可提交/交付”版本。

## 快速运行

### 期末项目（`practicaFinal/`）

编译 `trad.y` 和 `back.y`，并运行 `tests/00` 下的用例：

```bash
bash practicaFinal/run_tests_00.sh
```

说明：
- `trad` 从 **stdin** 读取 `.c` 程序，并在 **stdout** 输出一种 **中间表示**（偏 LISP 风格）。
- `back` 从 **stdin** 读取该中间表示，并在 **stdout** 输出最终结果。

### 实践 4（`practica4/`）

把测试翻译成 LISP 并用 CLISP 执行，结果保存在 `practica4/resultados/`：

```bash
bash practica4/run_tests.sh
```

### 实践 5（`practica5/`）

运行一个简单的后端测试用例：

```bash
bash practica5/run_test.sh
```

## 手动编译（参考）

### 仅 Bison（不使用 flex）

```bash
bison file.y
gcc file.tab.c -o output
./output
```

### Bison + Flex（类似 `lab4/`）

```bash
bison -d calc4.y
flex calc4.lex
gcc lex.yy.c calc4.tab.c -o calc4
./calc4
```

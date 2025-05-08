#!/bin/bash

# Compilar el parser
echo "Compilando con bison y gcc..."
bison trad.y
gcc trad.tab.c -o trad

# Crear carpeta de resultados si no existe
mkdir -p resultados

# Buscar todos los .c dentro de tests
for cfile in tests/*/*.c; do
    dir=$(dirname "$cfile")
    base=$(basename "$cfile" .c)
    group=$(basename "$dir")

    # Crear directorio de resultados por grupo
    mkdir -p "resultados/$group"

    # Archivos de salida
    lisp_file="resultados/$group/$base.lisp"
    output_file="resultados/$group/$base.output"
    full_file="resultados/$group/$base.full.txt"

    echo "Procesando $cfile..."

    # Traducir a LISP
    ./trad < "$cfile" > "$lisp_file"

    # Ejecutar en CLISP y capturar salida
    clisp "$lisp_file" > "$output_file" 2>&1

    # Combinar código LISP + resultado de ejecución
    {
        echo "==== Código LISP generado de $base.c ===="
        cat "$lisp_file"
        echo
        echo "==== Resultado de ejecución ===="
        cat "$output_file"
    } > "$full_file"

done

echo "Todos los archivos procesados. Revisa la carpeta 'resultados/'"

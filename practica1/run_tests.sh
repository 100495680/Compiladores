#!/bin/bash
# Script para ejecutar el parser drLL leyendo cada línea de drLL.txt
# y almacenando los resultados en output.txt

# Verifica si el ejecutable drLL existe, si no, intenta compilarlo
if [[ ! -f "./drLL" ]]; then
    if [[ -f "./drLL.c" ]]; then
        echo "El ejecutable 'drLL' no se encontró. Intentando compilar..."
        gcc drLL.c -o drLL
        if [[ $? -ne 0 ]]; then
            echo "Error: Falló la compilación de 'drLL.c'."
            exit 1
        fi
    else
        echo "Error: Ni el ejecutable 'drLL' ni el archivo fuente 'drLL.c' se encuentran en el directorio actual."
        exit 1
    fi
fi

# Verifica que el archivo de pruebas drLL.txt existe
if [[ ! -f "./drLL.txt" ]]; then
    echo "Error: El archivo 'drLL.txt' no se encuentra en el directorio actual."
    exit 1
fi

OUTPUT_FILE="output.txt"
# Se borra cualquier contenido previo en output.txt
> "$OUTPUT_FILE"

# Lee el archivo de pruebas línea por línea
while IFS= read -r line; do
    # Si la línea está vacía, la saltamos
    if [[ -z "$line" ]]; then
        continue
    fi

    # Se envía la línea (con un salto de línea) como entrada al ejecutable
    result=$(echo "$line" | ./drLL)

    # Escribimos la entrada y la salida en el archivo de resultados
    {
        echo "Entrada: $line"
        echo "Salida:  $result"
        echo "----------------------------------------"
    } >> "$OUTPUT_FILE"
done < drLL.txt

echo "Pruebas completadas. Los resultados se han almacenado en $OUTPUT_FILE."

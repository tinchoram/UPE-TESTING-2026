package main

import (
	"errors"
	"fmt"
	"strconv"
)

func dividir(aStr string, bStr string) (float64, error) {
	// Esta función intenta convertir dos textos a número
	// y luego realizar una división.
	fmt.Println("Inicio de dividir()") // Breakpoint 1

	// strconv.Atoi convierte string a int.
	// Si el valor no es numérico, devuelve error.
	a, err := strconv.Atoi(aStr)
	if err != nil {
		// En Go no usamos try/catch:
		// devolvemos el error para que quien llama decida qué hacer.
		return 0, errors.New("el primer valor no es un entero válido") // Breakpoint 2
	}

	b, err := strconv.Atoi(bStr)
	if err != nil {
		return 0, errors.New("el segundo valor no es un entero válido") // Breakpoint 3
	}

	// Antes de dividir, validamos que el divisor no sea cero.
	if b == 0 {
		return 0, errors.New("no se puede dividir por cero") // Breakpoint 4
	}

	// Convertimos a float64 para evitar división entera.
	resultado := float64(a) / float64(b) // Breakpoint 5
	return resultado, nil
}

func main() {
	// Acá llamamos a la función y recibimos:
	// - el resultado
	// - el error (si ocurrió alguno)
	resultado, err := dividir("10", "0") // Breakpoint 6

	//resultado, err := dividir("10", "0") // Breakpoint 6

	if err != nil {
		// Si hubo error, lo mostramos y terminamos.
		fmt.Println("Error:", err) // Breakpoint 7
		return
	}

	// Si err == nil, significa que todo salió bien.
	fmt.Println("Resultado:", resultado) // Breakpoint 8
}

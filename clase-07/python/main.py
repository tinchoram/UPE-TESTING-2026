def dividir_numeros():
    try:
        # El bloque try contiene el código que puede generar una excepción.
        print("Inicio del bloque try")          # Breakpoint 1

        # Si el usuario escribe algo que no se puede convertir a entero,
        # Python lanza una excepción ValueError.
        a = int(input("Ingrese el primer número: "))   # Breakpoint 2
        b = int(input("Ingrese el segundo número: "))  # Breakpoint 3

        # Si b vale 0, Python lanza una excepción ZeroDivisionError.
        resultado = a / b                       # Breakpoint 4
        print(f"Resultado: {resultado}")        # Breakpoint 5

    except ValueError:
        # Captura el error cuando el usuario no ingresa un número entero válido.
        print("Error: debe ingresar números enteros.")  # Breakpoint 6

    except ZeroDivisionError as e:
        # Captura el error cuando se intenta dividir por cero.
        print("Error: no se puede dividir por cero.")   # Breakpoint 7
        print(f"Texto del error:{e}")
    except Exception as e:
        # Excepción genérica:
        # captura cualquier otro error no contemplado en los except anteriores.
        # Conviene ponerla al final, porque si estuviera antes,
        # atraparía también a las excepciones específicas.
        print(f"Ocurrió un error no previsto:{e}")

    finally:
        # El bloque finally se ejecuta siempre:
        # - si todo salió bien
        # - si ocurrió un error
        # - si entró a un except
        # Se usa mucho para cerrar archivos, conexiones o liberar recursos.
        print("Fin del proceso.")               # Breakpoint 8


dividir_numeros()
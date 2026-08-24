def main():

    totalequipos = 0
    maxpt = -1
    maxdg = -9999
    campeon = ""

    opcion = 0

    while opcion !=5:
        print("\nEstadisticas del Torneo!")
        print("\n")
        print("1. - Ingrese el Nombre del Equipo:")
        print("\n")
        print("2. - Mostrar Posiciones de los Equipos:")
        print("\n")
        print("3. - Datos del Equipo Ganador:")
        print("\n")
        print("4. - Actualizar Datos de Equipos Ingresados:")
        print("\n")
        print("5. - Salir")
        print("\n")
        
        try:
            opcion = int(input("Seleccione una de las Opciones Mencionadas: "))
        except ValueError:
            print("Opcion Invalida. ")
            continue

        if opcion == 1:
            nombre = input("Ingrese el Nombre del Equipo: ").strip()

            while True:
                while True:
                    try:
                        partidosg = int(input("Ingrese la Cantidad de Partidos Ganados: "))
                        if partidosg >= 0:
                            break
                        else:
                            print("Invalido. Usted no puede Ingresar Datos Negativos. ")
                    except ValueError:
                        print("Dicho esto, por favor INGRESE un numero entero VALIDO POSITIVO. ")

                while True:
                    try:
                        partidosp = int(input("Ingrese la Cantidad de Partidos Perdidos: "))
                        if partidosp >= 0:
                            break
                        else:
                            print("Invalido. Usted no puede Ingresar Datos Negativos. ")
                    except ValueError:
                        print("Dicho esto, por favor INGRESE un numero entero VALIDO POSITIVO. ")

                while True:
                    try:
                        partidose = int(input("Ingrese la Cantidad de Partidos Empatados: "))
                        if partidose >= 0:
                            break
                        else:
                            print("Invalido. Usted no puede Ingresar Datos Negativos. ")
                    except ValueError:
                        print("Dicho esto, por favor, INGRESE un numero entero VALIDO POSITIVO. ")

                totalpartidosequipo = partidosg + partidosp + partidose

                if totalpartidosequipo > 10:
                    break
                else:
                    print(f"Invalido. Los partidos jugados deben ser mas de 10. Usted ingreso menos partidos. Vuelva a ingresar los datos.")

            while True:
                try:
                    golesf = int(input("Ingrese la Cantidad de Goles a Favor: "))
                    if golesf >= 0:
                        break
                    else:
                        print("Invalido. Usted no puede Ingresar Datos Negativos. ")
                except ValueError:
                    print("Dicho esto, por favor, INGRESE un numero entero VALIDO POSITIVO. ")

            while True:
                try:
                    golesc = int(input("Ingrese la Cantidad de Goles en Contra: "))
                    if golesc >= 0:
                        break
                    else:
                        print("Invalido. Usted no puede Ingresar Datos Negativos. ")
                except ValueError:
                    print("Dicho esto, por favor, INGRESE un numero entero VALIDO POSTIVO. ")

            pg = partidosg * 3
            pp = partidosp * 0
            pe = partidose * 1
            pt = pg + pe
            dg = golesf + golesc

            totalequipos += 1

            if pt > maxpt:
                maxpt = pt
                maxdg = dg
                campeon = nombre
            elif pt == maxpt:
                if dg > maxdg:
                    maxdg = dg
                    campeon = nombre

            print("El Equipo Ha Sido Registrado. ")

        elif opcion == 2:
            if totalequipos <4:
                print(f"Invalido. 4 equipos como minimo deben de ser ingresados. Usted ingreso una cantidad menor.")
            else:
                print("\nPosiciones de Equipos: ")
                print("\n")
                print(f"Se Ingresaron {totalequipos} Equipos Correctamente. ")
                print("\n")
                print(f"Ultimo Equipo Ingresado: {nombre}")
                print("\n")
                print(f"Puntos en Total: {pt}")
                print("\n")
                print(f"Diferencia de Goles: {dg}")

        elif opcion == 3:
            if totalequipos <4:
                print(f"Invalido. 4 equipos como minimo deben de ser ingresados. Usted Ingreso una cantidad menor.")
            else:
                print("\nDatos del Equipo Ganador")
                print("\n")
                print(f"Equipo Ganador: {campeon}")
                print("\n")
                print(f"Puntos Totales: {maxpt}")
                print("\n")
                print(f"Diferencia de Goles: {maxdg}")

        elif opcion == 4:
            totalquipos = 0
            maxpt = -1
            maxdg = -9999
            campeon = ""
            print("Se ha Hecho la Actualizacion de Los Datos de Los Equipos Ingresados. ")

        elif opcion ==5:
            print("\n")
            print("Saliendo Del Programa.")
            print("\n")

        else:
            print("\n")
            print("Opcion Invalida.")
            print("\n")

if __name__ == "__main__":
    main()

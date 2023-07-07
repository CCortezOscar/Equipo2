#include <iostream>
#include<cstdlib>
#include<conio.h>
#ifdef _WIN32
  #include<windows.h>
#endif 

using namespace std;

//la función debe mostrar los datos capturados en orden, Nombre, Telefono, Direccion y email.
void funcion1() {
    string nombre;
    string telefono;
    string direccion;
    string email;

    char opcion;

    do {
        cout << "\nMenu:\n";
        cout << "1) Capturar nombre\n";
        cout << "2) Capturar teléfono\n";
        cout << "3) Capturar direccion\n";
        cout << "4) Capturar email\n";
        cout << "5) Imprimir datos\n";
        cout << "0) Salir\n";
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch (opcion) {
            case '1':
                cout << "Ingrese su nombre: ";
                cin >> nombre;
                break;
            case '2':
                cout << "Ingrese su teléfono: ";
                cin >> telefono;
                break;
            case '3':
                cout << "Ingrese su direccion: ";
                cin >> direccion;
                break;
            case '4':
                cout << "Ingrese su email: ";
                cin >> email;
                break;
            case '5':
                cout << "Datos capturados:\n";
                cout << "Nombre: " << nombre << endl;
                cout << "Teléfono: " << telefono << endl;
                cout << "Direccion: " << direccion << endl;
                cout << "Email: " << email << endl;
                break;
            case '0':
                cout << "Saliendo del programa..." << endl;
                break;
            default:
                cout << "Opcion inválida. Por favor, seleccione una opción válida." << endl;
                break;
        }
    } while (opcion != '0');
}

//función para que dada una cadena ingresada por el usuario esta sustituya todas las vocales por una letra "c"
std::string sustituirVocalesPorC(const std::string& cadena) {
    std::string resultado = cadena;

    for (int i = 0; i < resultado.length(); ++i) {
        char c = std::tolower(resultado[i]);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            resultado[i] = 'c';
        }
    }

    return resultado;
}
void sustituir() {
	 std::string cadena;
    std::cout << "Ingresa una cadena: ";
    std::getline(std::cin, cadena);

    std::string resultado = sustituirVocalesPorC(cadena);

    std::cout << "Cadena resultante: " << resultado << std::endl;
    
    //esta funcion debe llamar a una funcion que se llamará diaDeLaSemana la cual recibirá un número que representa el dia de la semana
    string diaDeLaSemana(int numero) {
    switch(numero) {
        case 1:
            return "Sabado";
        case 2:
            return "Domingo";
        case 3:
            return "Lunes";
        case 4:
            return "Martes";
        case 5:
            return "Miercoles";
        case 6:
            return "Jueves";
        case 7:
            return "Viernes";
        default:
            return "Numero invalido";
    }
}

void funcion4() {
    int numero;
    while (true) {
        cout << "Ingrese un numero del 1 al 7 (0 para salir): ";
        cin >> numero;

        if (numero == 0)
            break;

        string dia = diaDeLaSemana(numero);
        cout << "Hoy es " << dia << "\n";
    }
    //esta función Lee dos números (desde el teclado) y muestra en pantalla los números comprendidos entre ambos. 
    void mostrarNumerosComprendidos(int num1, int num2) {
    int inicio, fin;
    if (num1 < num2) {
        inicio = num1 + 1;
        fin = num2 - 1;
    } else {
        inicio = num2 + 1;
        fin = num1 - 1;
    }

    if (inicio > fin) {
        printf("No hay números comprendidos entre %d y %d\n", num1, num2);
        return;
    }

    printf("Números comprendidos entre %d y %d: ", num1, num2);
    for (int i = inicio; i <= fin; i++) {
        printf("%d ", i);
    }
    printf("\n");
}

void funcion5() {
    int num1, num2;
    char opcion;

    do {
        printf("Ingrese el primer numero: ");
        scanf("%d", &num1);
        printf("Ingrese el segundo numero: ");
        scanf("%d", &num2);

        mostrarNumerosComprendidos(num1, num2);

        printf("¿Desea repetir el proceso? (s/n): ");
        scanf(" %c", &opcion);
    } while (opcion == 's' || opcion == 'S');
}
}
//esta función pide intriducir un texto al usuario y debe contar cuantas vocales y consonantes tiene
void contarVocalesYConsonantes() {
    char texto[100];
    int vocales = 0, consonantes = 0;
    
    printf("Introduce un texto (max. 100 caracteres): ");
    scanf("%s", texto);
    
    for (int i = 0; texto[i] != '\0'; i++) {
        char c = tolower(texto[i]);
        
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            vocales++;
        } else if (isalpha(c)) {
            consonantes++;
        }
    }
    
    printf("Vocales: %d Consonantes: %d\n", vocales, consonantes);
}

int main() {
    int opcion = 0;
    
    while (opcion != 2) {
        printf("Menú principal\n");
        printf("1. Contar vocales y consonantes\n");
        printf("2. Salir\n");
        printf("Selecciona una opción: ");
        scanf("%d", &opcion);
        
        switch (opcion) {
            case 1:
                contarVocalesYConsonantes();
                break;
            case 2:
                printf("Saliendo...\n");
                break;
            default:
                printf("Opción inválida. Inténtalo de nuevo.\n");
        }
        
        printf("\n");
    }
    
    return 0;
}
//Esta función debe llamarse Dibuja, la cual debe dibujar un triangulo
void Dibuja()
{
    // Triángulo 1
    std::cout << "Triangulo 1:" << std::endl;
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= i; j++) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }

    // Triángulo 2
    std::cout << "\nTriangulo 2:" << std::endl;
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5; j++) {
            if (i == 1 || i == 5 || j == 1 || j == 5)
                std::cout << "*";
            else
                std::cout << " ";
        }
        std::cout << std::endl;
    }

    // Triángulo 3
    std::cout << "\nTriangulo 3:" << std::endl;
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5 - i; j++) {
            std::cout << " ";
        }
        for (int k = 1; k <= (2 * i) - 1; k++) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }

    // Triángulo 4
    std::cout << "\nTriangulo 4:" << std::endl;
    for (int i = 5; i >= 1; i--) {
        for (int j = 1; j <= 5 - i; j++) {
            std::cout << " ";
        }
        for (int k = 1; k <= (2 * i) - 1; k++) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }

    // Triángulo 5
    std::cout << "\nTriangulo 5:" << std::endl;
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5 - i; j++) {
            std::cout << " ";
        }
        for (int k = 1; k <= (2 * i) - 1; k++) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
    for (int i = 4; i >= 1; i--) {
        for (int j = 1; j <= 5 - i; j++) {
            std::cout << " ";
        }
        for (int k = 1; k <= (2 * i) - 1; k++) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
}

int main() {
    funcion4();
    return 0;
}
    
    
    int main()
{

    int opc = 0;
    do{
        limpiar_pantalla();
        cout << "*********************** MENU PRINCIPAL *****************************\n\n\n\n\n";
        cout << "1 Compara\n";
        cout << "2 Inverso String\n";
        cout << "3 Tablas de Multiplicar\n";
        cout << "4 Calculas IMC\n";
        cout << "0 Salir\n";
        cout << "\n\n\nSelecciona alguna opción:_ ";
        cin >> opc;
        switch(opc){
            case 1:
                funcion1();
                break;
            case 2:
                sustituirVocalesPorC(const std::string& cadena);
                break;
            case 3:
                 diaDeLaSemana(int numero) ;
                break;
          
            case 5:
               mostrarNumerosComprendidos(int num1, int num2) ;
                break;
            case 6:
                contarVocalesYConsonantes();
                break;
            case 7:
                void Dibuja();
                break;

        }
    }while(opc != 0);

    return 0;
}



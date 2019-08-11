/*Mostrar los meses del año, pidiendole al usuario un numero entre (1-12), y mostrar al mes que
corresponde*/

#include <iostream>

int main(void) {
    int mes;

    std::cout << "Introduce el numero del mes" << std::endl;
    std::cin >> mes;

    switch (mes) {
        case 1: std::cout << "Es el mes de enero" << std::endl; break;
        case 2: std::cout << "Es el mes de febrero" << std::endl; break; 
        case 3: std::cout << "Es el mes de marzo" << std::endl; break;
        case 4: std::cout << "Es el mes de abril" << std::endl; break;
        case 5: std::cout << "Es el mes de mayo" << std::endl; break;
        case 6: std::cout << "Es el mes de junio" << std::endl; break;
        case 7: std::cout << "Es el mes de julio" << std::endl; break;
        case 8: std::cout << "Es el mes de agosto" << std::endl; break;
        case 9: std::cout << "Es el mes de septiembre" << std::endl; break;
        case 10: std::cout << "Es el mes de octubre" << std::endl; break;
        case 11: std::cout << "Es el mes de noviembre" << std::endl; break;
        case 12: std::cout << "Es el mes de diciembre" << std::endl; break;        
        default: std::cout << "No hay mas meses" << std::endl; break;
    }

    return 0;
}
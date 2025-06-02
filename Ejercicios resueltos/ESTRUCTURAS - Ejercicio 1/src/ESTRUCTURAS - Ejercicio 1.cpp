//============================================================================
// Name        : ESTRUCTURAS.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

/*Hacer una estructura llamada corredor, en la cual se tendrán los siguientes campos: Nombre, edad, sexo, club,
pedir datos al usuario para un corredor, y asignarle una categoría de competición:
- Juvenil menor o = 18 años
- Señor menor o = 40 años
- Veterano mayor a 40 años
Posteriormente imprimir todos los datos del corredor, incluida su categoría de competición. */

#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

struct Corredor { //Declaro la estructura
	char nombre[20];
	int edad;
	char sexo[10];
	char club[20];
} Corredor1; //Declaro una variable de tipo estructura

int main() {
	char categoria[10]; //Variable para almacenar la categoria del corredor
	//Vamos a pedirle los datos al usuario y a guardarlos donde correspondan
	cout << "Nombre del corredor: ";
	cin.getline(Corredor1.nombre,20,'\n');
	cout << "Edad: ";
	cin >> Corredor1.edad;
	fflush(stdin); //Para vaciar el buffer y seguir digitando valores
	//cin.ignore(); //Para limpiar el buffer
	cout << "Sexo: ";
	cin.getline(Corredor1.sexo,10,'\n');
	cout << "Club: ";
	cin.getline(Corredor1.club,20,'\n');

	//Asignandole una categoria de competición
	if(Corredor1.edad <= 18) {
		strcpy(categoria,"Juvenil"); //Si se cumple la condicion, copiamos "Juvenil" en la variable categoria
	}
	else if(Corredor1.edad <= 40) {
		strcpy(categoria,"Señor"); //Si se cumple la condicion, copiamos "Señor" en la variable categoria
	}
	else if(Corredor1.edad > 40) {
		strcpy(categoria,"Veterano"); //Si se cumple la condicion, copiamos "Veterano" en la variable categoria
	}

	//Imprimiendo todos los datos, incluyendo la categoria
	cout << "\nNombre del corredor: " << Corredor1.nombre << endl;
	cout << "Edad: " << Corredor1.edad << endl;
	cout << "Sexo: " << Corredor1.sexo << endl;
	cout << "Club: " << Corredor1.sexo << endl;
	cout << "Categoría: " << categoria << endl;

	getch();
	return 0;
/*Porque se rellena el buffer?
El buffer es un espacio de memoria intermediario entre el usuario y el programa que almacena datos y se los brinda a la primera función en el
programa que los extraiga. Alejandro teclea primero su nombre, acto seguido el programa le pide la edad y, claro, el usuario se la brinda pero al
presionar la tecla "Intro" para asignar el número el programa toma una cadena de caracteres de la siguiente forma "20\n" (es decir, el 20 que se le
indicó y el intro para continuar con el programa). El cin toma lo que necesita y deja el resto. Al ver que la variable de destino es un entero,
el cin sólo saca los números pero el salto de línea ('\n') que se le introdujo al presionar enter sigue ahí esperando a ser extraído.
El programa sigue, muestra el cout << "sexo: " y al ejecutar la siguiente línea se da cuenta que no tiene que esperar a que el usuario le introduzca
una cadena por teclado porque el buffer no está vacío, tiene un hermoso salto de línea esperando su turno de ser útil y claro, el flujo de entrada lo
toma sin preguntar para ejecutar el cin.getline(). Pero que pasa? Alejandro le está indicando al flujo de entrada (cin) que, al pedir el sexo,
corte la cadena cuando encuentre un '\n'. A lo que el programa reacciona con un "Pero lo único que tengo es un salto de línea ¿que hago?" entonces
corta la cadena como se le indicó (eliminando el único char que tiene) y le asigna un carácter nulo ('\0') al sexo. Después el buffer se vacía por lo
que ya extrajeron el último dato que era el salto de línea así que al programa le toca hacer una pausa para preguntarle al usuario el "Club"

Nota: el fflush(stdin) (no  es recomendado usarlo pero para aplicaciones pedagógicas es fácil de entender) lo que hace es limpiar el buffer.
Es decir que después de que se le introduzca la edad, borra ese salto de línea que va después de los números y arruina todo o lo que haya en el
buffer en el momento en que se esté usando la función. Así la próxima vez que se el flujo de entrada abra el buffer para rellenar una variable,
lo va a encontrar vacío y le va a tocar hacer la interrupción para preguntarle al usuario la cadena.

Nota 2: el cin.ignore (Recomendado pero hay que saberlo usar) hace lo mismo que el fflush(stdin). Tiene varios comportamientos según los parámetros
que se le asignen. */
}

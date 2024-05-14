/*
   Fundacion Kinal
   Centro educativo tecnico laboral Kinal
   Quinto perito
   Quinto electronica
   Codigo Tecnico: EB5AV / EB5AV 
   Curso: Taller de electronica digital y reparacion de computadoras I
   Proyecto: Parte 1, práctica 5
   Dev: Josivar Sebastian rayjam Alva López
   Fecha: 5 de mayo del año 2024
   link de la simulacion: 
*/

float Kilogramos = 5.35;
float Libras;

float Amperios = 2.98;
float microA;

//Variables para los pines digitales y segmentos del display
const int A = 2;
const int B = 3;
const int C = 4;
const int D = 5;

const int i_pin = 0;
const int N = 4;
const int Segmentos[N] = {A, B, C, D};

const int Digitos[10][N] = {
    {1, 0, 0, 0}, //1
    {1, 1, 0, 0}, //3
    {1, 0, 1, 0}, //5
    {1, 1, 1, 0}, //7
    {1, 0, 0, 1}  //9
};

float Conversion_KG_a_LB() {
    // 1 kilogramo equivale a 2.20462 libras
    return Kilogramos * 2.20462;
}

float Conversion_A_a_microA() {
    // 1 Amperio equivale a 1000000 microAmperios
    return Amperios * 1000000;
}

void setup() {
    Serial.begin(9600);

    //Proceso de conversion en el monitor serial
    Libras = Conversion_KG_a_LB();
    Serial.print(Kilogramos);
    Serial.print(" kilogramos son equivalentes a ");
    Serial.print(Libras);
    Serial.println(" libras.");
    delay(100);

    microA = Conversion_A_a_microA();
    Serial.print(Amperios);
    Serial.print(" Amperios son equivalentes a ");
    Serial.print(microA);
    Serial.println(" Micro Amperios.");
    delay(100);

    // Llamo a la funcion donde se configuraron los estados de los pines
    configPins();
}

void configPins() {
    int j;

    for (j = 0; j < N; j++) {
        pinMode(Segmentos[j], OUTPUT);
        digitalWrite(Segmentos[j], HIGH);
    }
}

void print(int d) {
    int k;

    for (k = 0; k < N; k++) {
        digitalWrite(Segmentos[k], Digitos[d][k]);
    }
    delay(1000); // Delay para visualizar cada dígito
  
    // Apagar los segmentos después de mostrar cada dígito
    for (k = 0; k < N; k++) {
        digitalWrite(Segmentos[k], LOW);
    }
}

void loop() {
    int l;

    for (l = 0; l < 10; l++) {
        print(l);
        delay(10);
    }
}
 

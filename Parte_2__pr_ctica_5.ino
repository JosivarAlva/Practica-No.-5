/*
   Fundacion Kinal
   Centro educativo tecnico laboral Kinal
   Quinto perito
   Quinto electronica
   Codigo Tecnico: EB5AV / EB5AV 
   Curso: Taller de electronica digital y reparacion de computadoras I
   Proyecto: Parte 2, práctica 5
   Dev: Josivar Sebastian rayjam Alva López
   Fecha: 5 de mayo del año 2024
   link de la simulacion: 
*/


int Buzzer = 6;

int c = 261;
int d = 294;
int e = 329;
int f = 349;
int g = 391;
int gS = 415;
int a = 440;
int aS = 455;
int b = 466;
int cH = 523;
int cSH = 554;
int dH = 587;
int dSH = 622;
int eH = 659;
int fH = 698;
int fSH = 740;
int gH = 783;
int gSH = 830;
int aH = 880;

void setup()
{
  pinMode(Buzzer, OUTPUT);
}

void loop()
{
  
    tone(Buzzer, a, 500);
    delay(550);
    tone(Buzzer, a, 500);
    delay(550);
    tone(Buzzer, a, 500);
    delay(550);
    tone(Buzzer, f, 350);
    delay(400);
    tone(Buzzer, cH, 150);
    delay(200);

    tone(Buzzer, a, 500);
    delay(550);
    tone(Buzzer, f, 350);
    delay(400);
    tone(Buzzer, cH, 150);
    delay(200);
    tone(Buzzer, a, 1000);
    delay(1050);

    tone(Buzzer, eH, 500);
    delay(550);
    tone(Buzzer, eH, 500);
    delay(550);
    tone(Buzzer, eH, 500);
    delay(550);
    tone(Buzzer, fH, 350);
    delay(400);
    tone(Buzzer, cH, 150);
    delay(200);

    tone(Buzzer, gS, 500);
    delay(550);
  
}

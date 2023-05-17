// Liberia para LCD
#include <LiquidCrystal.h>

// Configuramos LCD (Pines Entre Arduino y LCD)
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

int contador = 0;

void setup() {
 // Inicializamos LCD
 lcd.begin(16, 2);
 //
 lcd.print("Bienvienido");
 // Indicamos Linea en LCD
 lcd.setCursor(0, 1);
 lcd.print("Al Sistema");
 delay(1000);
 // Limpiamos LCD
 lcd.clear();
 delay(1000);
 lcd.print("Iniciando el ");
 lcd.setCursor(0, 1);
 lcd.print("temporizador");
 delay(1000);
 lcd.clear();
 lcd.print("Contando los");
 lcd.setCursor(0, 1);
 lcd.print("Seg: ");
 }
void loop() {
 lcd.setCursor(7, 1);
 lcd.print(contador);
 contador++;
 delay(1000);
}
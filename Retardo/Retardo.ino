/*  EJEMPLO: librería propia para programar retardos no bloqueantes
 *  
 *  Autor: Robert Sallent 
 *  Curso: programación de placas robóticas en CIFO Sabadell 
 *  Versión: 1.0 - La clase Retardo
 */

#include "Retardo.h"

Retardo r(1000);  // crea un retardo no bloqueante de 1000ms

int estado = LOW;

// inicialización
void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  digitalWrite(LED_BUILTIN, LOW);
}

void loop() {

  // Para evaluar si se ha cumplido el tiempo, usamos el método comprobar().
  // Por lo general, colocaremos las acciones a realizar en un IF
  if(r.comprobar()){ 
    estado = !estado;
    digitalWrite(LED_BUILTIN, estado);   
  }

  // si deseamos cambiar el tiempo de retardo en cualquier momento: 
  // r.setTiempo(5000);

  // si deseamos reiniciar el temporizador:
  // r.reiniciar();
}

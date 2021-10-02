/*  EJEMPLO: librería propia para detectar flancos
 *  
 *  Autor: Robert Sallent 
 *  Curso: programación de placas robóticas en CIFO Sabadell 
 *  Versión: 2.4 - La clase Flanco
 */

#include "Flanco.h"

#define BUTTON 2
Flanco fboton(BUTTON); // objeto de tipo flanco

// inicialización
void setup() {
  Serial.begin(9600);
  Serial.println("inicializando...");
  pinMode(BUTTON, INPUT_PULLUP);
}

void loop() {
  
  // detectar el flanco de subida con el método detectar()
  if(fboton.detectar() == FLANCO_SUBIDA)
    Serial.println("Detectado flanco de subida"); 

  // detectar el flanco de bajada con el método bajada()
  if(fboton.bajada())
    Serial.println("Detectado flanco de bajada");
    
}

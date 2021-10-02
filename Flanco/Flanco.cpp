/*  LIBRERÍAS EXTRA
 *  Detector de flancos
 *  -- Fichero con código --
 *  
 *  Autor: Robert Sallent 
 *  Curso: programación de placas robóticas en CIFO Sabadell 
 *  Versión: 2.4 - Hecha mediante la clase Flanco
 *  
 *  La información de uso se encuentra en el fichero flanco.txt
 */
 
#include <Arduino.h>
#include "Flanco.h"

//implementación de los métodos de la clase Flanco

Flanco::Flanco(int pin){
  this->pin = pin;
  this->estadoAnterior = digitalRead(pin);
}

int Flanco::detectar(){
  int estadoActual = digitalRead(pin);
  int resultado = NO_FLANCO;
  
  if(this->estadoAnterior != estadoActual){
    if(estadoActual==HIGH)
      resultado = FLANCO_SUBIDA; 
    else
      resultado = FLANCO_BAJADA;

    this->estadoAnterior = estadoActual;
  } 
  return resultado;
}

bool Flanco::subida(){
  return this->detectar() == FLANCO_SUBIDA;
}

bool Flanco::bajada(){
  return this->detectar() == FLANCO_BAJADA;
}

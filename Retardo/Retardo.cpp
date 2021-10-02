/*  LIBRERÍAS EXTRA
 *  Programador de retardos no bloqueantes
 *  -- Fichero de código - 
 *  
 *  Autor: Robert Sallent 
 *  Curso: programación de placas robóticas en CIFO Sabadell 
 *  Versión: 1.1 - Hecha mediante la clase Retardo
 *  
 *   La información de uso se encuentra en el fichero flanco.txt
 */

 
#include <Arduino.h>
#include "Retardo.h"

//implementación de los métodos de la clase Flanco

Retardo::Retardo(int tiempo){
  this->tiempo = tiempo;
  this->tiempoInicial = millis();
}

bool Retardo::comprobar(){
  unsigned long tiempoActual = millis();
  if(tiempoActual - this->tiempoInicial >= this->tiempo){
    this->tiempoInicial = tiempoActual;
    return true;
  }

  return false;
}

void Retardo::setTiempo(int tiempo){
  this->tiempo = tiempo;
}

void Retardo::reiniciar(){
  this->tiempoInicial = millis();
}

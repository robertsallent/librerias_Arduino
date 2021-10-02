/*  LIBRERÍAS EXTRA
 *  Detector de flancos
 *  -- Fichero de cabecera - 
 *  
 *  Autor: Robert Sallent 
 *  Curso: programación de placas robóticas en CIFO Sabadell 
 *  Versión: 2.4 - Hecha mediante la clase Flanco
 *  
 *   La información de uso se encuentra en el fichero flanco.txt
 */


#ifndef FLANCOS_CIFO
#define FLANCOS_CIFO

// definición de constantes que tendremos disponibles
#define FLANCO_BAJADA  -1
#define FLANCO_SUBIDA  1
#define NO_FLANCO  0

//clase y métodos
class Flanco{
  public:
  Flanco(int pin); // constructor
  int detectar();  // método para la detección de flancos
  bool subida();   // método que detecta flanco de subida
  bool bajada();   // método que detecta flanco de bajada
  
  private: 
  int pin;
  int estadoAnterior;
};

#endif

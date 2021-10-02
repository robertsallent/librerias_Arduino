/*  LIBRERÍAS EXTRA
 *  Programador de retardos no bloqueantes
 *  -- Fichero de cabecera - 
 *  
 *  Autor: Robert Sallent 
 *  Curso: programación de placas robóticas en CIFO Sabadell 
 *  Versión: 1.1 - Hecha mediante la clase Retardo
 *  
 *   La información de uso se encuentra en el fichero flanco.txt
 */


#ifndef RETARDO_CIFO
#define RETARDO_CIFO

//clase y métodos
class Retardo{
  public:
  Retardo(int tiempo); // constructor
  bool comprobar();
  void setTiempo(int tiempo);
  void reiniciar();  

  private: 
  int tiempo;
  unsigned long tiempoInicial;
};

#endif

1) En el paso 1: pre-procesamiento, se espera que se reemplacen las librerias por el codigo de las mismas y se generan directivas para el compilador.
En el paso 2: Se crea el codigo assembler a partir del codigo C precompilado
En el paso 3: Se crea el objeto en el cual se observan distintos descriptores
En el paso 4: Se linkea el objeto creando el ejecutable.

2)El preprocesador agrego todo el contenido de las distintas librerias e incluso si estas hacian referencia a otras librerias el contenido de esas mismas. Tambien agrega las directivas para el compilador.

3)Las funciones son: Main, add_numbers y printf. Tanto main como add_numbers se definen en el codigo, mientras que printf se llama desde una libreria.

4) Los simbolos que se crean en el .o son los descriptores. 

T add_numbers
T Main
U printf

T= descriptor de texto, indica que tengo codigo. La mayuscula indica que se puede acceder en forma publica
U= descriptor de no definido, indica que se encuentra la llamada a la funcion pero recien en el linkeo se va a definir que realiza.

5) En el ejecutable encontramos muchos mas simbolos que en el objeto, ya que se encuentran todas las funciones necesarias para ejecutar el codigo. Ademas cambia lo que en el objeto se encontraba como no definido. En este caso, como se llama a una libreria dinamica la linea 
U printf, se reemplaza con U printf@@GLIBC_2-2-5 que indica el linkeo a una libreria dinamica.

Mariana Suarez, Celeste Guagliano 

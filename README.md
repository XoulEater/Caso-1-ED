# Caso-1-ED
# Hecho por Jose Pablo Barquero Diaz 2022119938

Para la abstraccion del mapa utilice una lista de structs llamados sectores, estos cuentan con tres elementos, el primero es un int con el numero asignado al sector, el segundo es otro int el cual indica el color actual del sector de la siguiente forma:

- 0 indica que aun no tiene un color definido
- 1 indica que el color es azul
- 2 indica que el color es rojo
- 3 indica que el color es amarillo
- 4 indica que el color es verde

Y el tercer elemento es una lista de ints con los numeros de los sectores adyacentes. 

En el programa se realiza un ciclo a travez de los sectores del mapa, una vez ahí se parte de la idea de que todos los colores estan disponibles para el sector actual, definiendo el valor de las cuatro variables representativas de los colores como true, despues de esto se hace un recorrido por los sectores adyacentes buscando que colores se encuentran ocupados, esto va por decirlo así eliminando los colores que no estan disponibles dandoles a sus varibiables un valor de false.
Una vez finalizado eate ciclo tan solo queda revizar que colores siguen disponibles para asignarle al sector que se esta trabajando, para efectos de simplicidad se le asigna el primer color disponible en el orden presentado arriba. En caso de que no queden colores implicaría que el teorema no se puede cumplir en el mapa actual, puesto que se encontrío un sector al cual no se le puede asignar un valor sin que este ya esté ocupado.

Nota: Puesto que en los structs todas las listas tienen que tener el mismo tamaño y no necesariamente todos tienen la misma cantidad de adyacentes, esto hace que algunas listas queden rellenadas al final con 0, es por eso que se crea un elemento mas en la lista con todos los valores en 0, esto con el fin de evitar errores en las asiganicones de color. Asimismo se incia el ciclo a partir del segundo elemento.

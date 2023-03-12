# AA1_05_AShootBallsGame

Las bolas están colocadas una al lado de la otra. Las bolas pueden ser de 5 colores diferentes. Inicialmente se tiene
una colección de bolas que se han puesto aleatoriamente pero de manera que nunca hay más de 2 bolas consecutivas del
mismo color. Inicialmente se lee del estándar input el número de bolas que tendrá el panel.

Durante el juego el panel crece y decrece.

El jugador tienen un identificador único, está en una posición, tiene el score conseguido y una pistola con un cargador de
bolas. Inicialmente el cargador se carga con 50 bolas aleatorias. La posición del jugador determina a qué bola dispara. El
jugador dispara siempre la primera bola que hay en el cargador de la pistola contra la bola que está en la posición del
jugador. El juego acaba cuando se vacía el cargador de la pistola.

Cuando la bola lanzada impacta contra el panel, se inserta la bola en la colección de bolas en el lugar de la bola
donde impactó. Si al insertar la bola, se logran tres bolas del mismo color, el jugador gana 1 punto, desaparecen las 3
bolas del panel y el juego genera 3 bolas nuevas de color aleatorio insertándolas por la derecha del panel.

1. Definir el tipo Ball.

2. Implementar un struct Player. La implementación debe incluir:

    a. Todos los miembros (atributos) necesarios para mantener la información de un jugador. Es especialmente
    importante pensar en cómo se representa a la pistola.

    b. Un método void init(std::string name, int position), que inicializa al jugador poniéndole
    como su identificador a name y colocándolo en la position dada, inicializa el score en 0 y carga a la
    pistola con 20 bolas aleatorias.
  
    c. Un método Ball shoot(): Dispara 1 bola, la primera que tiene. La bola se elimina del cargador y la
    función la devuelve.
  
3. Implementar el struct Panel. La implementación debe incluir:
  
    a. Atributos(campos)
        Ball *panel;
        int size; //representa en todo momento el tamaño del panel

    b. El método void init(): Inicializa al panel con un número aleatorio de bolas aleatorias que es leído
    del estándar input.

    c. El método void insert(int position, Ball ball): Inserta la bola ball en el panel de bolas
    en la posición indicada. La inserción la realiza desplazando a derecha las bolas.

    d. El metodo int verifier(int position, Ball ball): Verifica si alrededor de la position
    hay una secuencia de 3 bolas consecutivas iguales a ball. Debe retornar un valor que indique dónde está
    la primera bola de las 3, en caso de existir 3. Si no hay 3 consecutivas, el valor de retorno lo debe indicar
    de alguna manera.

    e. El método void deleteThree(int position): Elimina 3 bolas consecutivas del panel a partir de la
    position dada.

    f. El método void insertThree(): Inserta 3 bolas aleatorias en el panel por el final.

    g. Un método que imprima las bolas que hay en el panel.

4. Implementar un main con el game loop. Decida cómo deben ser los inputs para jugar. El juego acaba cuando el
cargador del jugador se vacía.

Puede implementar otras funciones auxiliares que crea convenientes.

En este ejercicio NO SE PERMITE el uso de STL vector.

# Activitat de mòduls i compilació separada per AP2

## Guió de l'activitat

1. Descarregueu el repositori amb l'activitat: `git clone https://github.com/jordi-petit/ap2-moduls`.

1. Entreu al directori `ap2-moduls` i compileu el projecte amb `make`.

1. Proveu el programa principal.

    Exemple d'entrada:

    ```text
    point_def p 3 4
    point_copy q p
    point_get_x q
    point_get_y q
    point_add q p
    point_get_x q
    point_get_y q
    ```

    Exemple de sortida:

    ```text
    3
    4
    6
    8
    ```

1. Investigueu el fitxer `Makefile`. Proveu d'esborrar algun fitxer `.o` i recompileu de nou amb `make`. Mireu els fitxers al vostre directori. Proveu un `make clean`.

1. Estudieu el mòdul `Point` amb la seva especificació a `Point.hh` i la seva implementació
   a `Point.cc`. Fixeu-vos en el patró del `#ifdef ... #endif` al `.hh` i la definició
   dels mètodes al `.cc`.

1. Estudieu ara el mòdul `Rectangle`, que es dóna mig implementat: La seva interfície
   a `Ractangle.hh` és sencera però la seva implementació a `Rectangle.cc` és incompleta.
   Completeu-la.

1. Estudieu el programa principal `main.cc`. La part del tractament de rectangles és
   incompleta. Completeu-la.
   
1. Mireu el fitxer `README.md` com està escrit en [Markdown](https://github.com/adam-p/markdown-here/wiki/Markdown-Cheatsheet).

1. Si teniu temps, estudieu ara el mòdul `Circle`, de qual només es dóna la seva
   interfície. Completeu la seva implementació i completeu el programa principal
   perquè l'utilitzi.

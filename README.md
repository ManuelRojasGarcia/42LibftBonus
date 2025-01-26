# 42LibftBonus

Este repositorio contiene una implementación extendida de la biblioteca estándar de C, como parte del proyecto **Libft Bonus** de la escuela 42. Incluye funciones avanzadas para la manipulación de listas enlazadas, memoria y cadenas, proporcionando una base sólida para proyectos en C.

## 📂 Contenido del repositorio

### 🗂️ Archivos principales:

- **📄 libft.h**: Archivo de cabecera con las declaraciones de funciones.
- **⚙️ Makefile**: Script para compilar la librería.
- **📝 src/**: Directorio con las implementaciones de funciones en C.

### 🛠️ Funcionalidades adicionales:

#### Listas enlazadas:
- `ft_lstnew`: Crea un nuevo nodo de lista.
- `ft_lstadd_front`: Añade un nodo al inicio de la lista.
- `ft_lstadd_back`: Añade un nodo al final de la lista.
- `ft_lstdelone`: Elimina un nodo de la lista.
- `ft_lstclear`: Elimina todos los nodos de la lista.
- `ft_lstiter`: Aplica una función a cada nodo de la lista.
- `ft_lstmap`: Crea una nueva lista aplicando una función a cada nodo.

#### Manipulación de memoria:
- `ft_memcpy`: Copia datos entre bloques de memoria.
- `ft_memmove`: Mueve datos entre bloques de memoria.
- `ft_memset`: Rellena un bloque de memoria con un valor específico.

## ⚙️ Compilación

Para compilar la biblioteca, ejecutar el siguiente comando:

```sh
make
```

Esto generará el archivo `libft.a` para su uso en otros proyectos.

## 🚀 Uso

Para utilizar la biblioteca en tus proyectos, incluye el encabezado y enlaza la librería:

```c
#include "libft.h"
```

Compilar el proyecto con:

```sh
gcc main.c -L. -lft -o my_program
```

## 📧 Contacto

Autor: **Manuel Rojas Garcia**  
Repositorio: [42LibftBonus](https://github.com/ManuelRojasGarcia/42LibftBonus)

[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-22041afd0340ce965d47ae6ef1cefeee28c7c493a6346c4f15d667ab976d596c.svg)](https://classroom.github.com/a/kl-E8VQf)

# TP 1

## Punto 2: gitignore

El archivo _.gitignore_ se usa en Git para especificar qué archivos o directorios deben ser ignorados por git.

- **¿Por qué es conveniente incluirlo?**
Evita subir archivos innecesarios, mejora la seguridad evitando subir datos sensibles y mantiene el repositorio limpio.

- **¿Cuándo se debe incluir?**
Desde el inicio del proyecto para asi evitar la subida de archivos no deseados

- **¿Cómo configurarlo?**
El archivo .gitignore debe ubicarse en la raíz del repositorio y contener patrones de archivos o carpetas que Git debe ignorar. Ejemplo:

### Ignorar archivos de configuración local
```
.env
config.json
```

### Ignorar dependencias
```
node_modules/
vendor/
```

### Ignorar archivos de compilación
```
dist/
build/
*.log
```

### Ignorar archivos específicos
```
ignorado.txt
```

## Punto 3: Apartado g
Los dos apartados tienen el mismo resultado pues el valor del puntero almacena la direccion de memoria de una variable asignada, por lo cual en ambos apartados estamos mostrando la direccion de memoria de la variable, primero desde el puntero y despues desde la propia variable.

En el punto 4 estamos obteniendo la direccion del propio puntero, el cual es un valor distinto pues este valor es la direccion de memoria del puntero, la cual es la direccion de memoria de la variable que almacena una direccion de memoria
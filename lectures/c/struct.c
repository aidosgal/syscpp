/*
  
C structures are special, large variables which contain several named variables inside. Structures are the basic foundation for objects and classes in C. Structures are used for:
- Serialization of data
- Passing multiple arguments in and out of functions through a single argument
- Data structures such as linked lists, binary trees, and more

*/
#include <stdio.h>

struct point {
  int x;
  int y;
};

void draw(struct point p) {
  printf("x: %d, y: %d", p.x, p.y);
}

typedef struct {
  char* brand;
  int model;
} vehicle;

void engine_strat(vehicle v) {
  printf("engine started for %s, %d",
         v.brand, v.model);
}

typedef struct {
  char* name;
  int age;
} person;

int main() {
  struct point p;
  p.x = 2;
  p.y = 3;
  draw(p);

  vehicle mycar;
  mycar.brand = "Ford";
  mycar.model = 2007;

  person me;
  me.age = 21;
  me.name = "Aidos";
}

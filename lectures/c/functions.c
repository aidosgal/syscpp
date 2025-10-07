#include <stdlib.h>

typedef struct {
  char* name;
  int age;
} person;

void birthday(person* p) {
  /*
    Another way
    (*p).age++;
  */
  p->age++; 
}

int main() {

}

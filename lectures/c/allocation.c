#include <stdlib.h>
#include <string.h>
#include <stdio.h>

typedef struct {
  char* name;
  int age;
} person;

int main() {
  /*
    Stack. Memory for p exists only inside main();
    it’s automatically freed when the function ends.
   */
  person p;
  p.name = "Aidos";
  p.age = 21;
  
  /*
    Heap. Memory lives until you manually free()
    it - you control the lifetime.
   */
  person* myperson = (person*) malloc(sizeof(person));
  person* man = (person*) malloc(sizeof(person));
  
  /*
    points to a string literal stored
    in read-only memory
  */
  myperson->name = "Aidos";
  myperson->age = 21;

  /*
    if you want to modify the name later,
    you need to allocate memory for it
  */
  man->name = malloc(sizeof(20));
  strcpy(man->name, "Aidos");

  strcpy(man->name, "Bizzar");
  
  free(myperson);
  free(man->name);
  free(man);
}

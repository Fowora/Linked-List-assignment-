#include <stdio.h>

#include "list.h"

int main() {
  printf("Some Tests for linked list implementation\n");
  list_t *test = list_alloc(2);
  list_add_to_back(test, 3);
  list_add_to_back(test, 5);
	list_add_to_front(test,2);
	//list_is_in(test,3);
  //list_print(test);
	list_get_index_of(test,1);
  list_print(test);
  return 0;
}

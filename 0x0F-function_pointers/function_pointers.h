#ifndef FUNCTION_POINTERS
#define FUNCTION_POINTERS

void print_name(char *name, void (*f) (char *));
/*void array_iterator(int *array, size_t size, void (*action)(int));*/
int int_index(int *array, int size, int (*cmp)(int));
void print_name_as_is(char *name);
void print_name_uppercase(char *name);

#endif

/**
  * print_name - Prints a name
  * @name: name to print
  * @f: function pointer to callback in print_name function
  */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}


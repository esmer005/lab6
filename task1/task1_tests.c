#include "checkit.h"
#include "task1.h"

void test1() {
   char input[] = "Hello THERE";
   char result[15];
   char *expected = "hello there";

   str_lower(input, result);

   checkit_string(result, expected);
}

// I ADDED THIS test for str_lower_mutate
void test2(){
	char input[] = "Hello THERE";
	char *expected = "hello there";

	str_lower_mutate(input);

	checkit_string(input, expected);
}

int main(void) {
   test1();

   // call test2 in order for it to actually run
   test2();
   return 0;
}

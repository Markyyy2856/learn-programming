/*
#include <iostream>

using namespace std;
int main(void) {
  cout << "It's me, your first program.";
  return 0;
}
*/

//1.1.2 LAB Your First Program
/**
Try to:

1. Add a greeting – let the program welcome you in a warm and pleasant way;
duplicate (or triplicate) the greeting to welcome more than one person;

2. Insert a line saying cout << endl; between two other couts and check the effects it has; does it look interesting? You're going to learn more about it soon;

3. Now try to insert a mysteriously-looking sequence of chars into any of the greeting: \n – there are exactly two characters: a backslash and lower-case n; what happens now?;

4. Try to remove any of the semicolons and look carefully at the compiler's response; pay attention to where the compiler sees an error – is this where the error really is?

5. Change the name of the main function to any other lexically correct word (e.g. Main); what happens now? Can you explain the result?

6. Remove some of the quotes (opening and closing ones respectively); does the compiler like that? What does it think of your actions?
 */

#include <iostream>

using namespace std;

int main(void) {
	cout << "It's me, your first program.";
  //1
  cout << "Welcome to C++!"; 
  //2
  cout << "Welcome to C++!";
  cout << "Welcome to C++!";
  cout << "Welcome to C++!";
  //3 Prints to another line
  cout << "Welcome to C++!";
  cout << endl;
  cout << "Welcome to C++!";
  //4 Prints to another line too
  cout << "Welcome to C++!\n";
  cout << "Welcome to C++!";
  //5 & 6 Gives an error


  //Drawing a shape
  cout << "   /|" << endl;
  cout << "  / |" << endl;
  cout << " /  |" << endl;
  cout << "/___|" << endl;
	return 0;
}
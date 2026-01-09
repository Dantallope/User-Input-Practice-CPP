#include <iostream>
#include <string>

int main(){
/*   
  std::cout << "Hello C++20" <<std::endl;

  int age = 20;
  std::cout << "Age : " << age << std::endl;

  std::cerr << "Error message : Something is wrong" << std::endl;
  std::clog << "Log message : something happened" << std::endl;
 */
  int age1;
  std::string name;

  std::cout << "Please type your name and age : " << std::endl;

  std::cin >> name;
  std::cin >> age1;

  std::cout << "Your name is " << name << " and you are " << age1 << " years old." << std::endl;
  return 0;
}
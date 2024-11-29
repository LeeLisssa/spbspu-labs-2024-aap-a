#include <iostream>
#include "isexpression.hpp"
#include "getline.hpp"

int main()
{
  constexpr char stop = '\n';
  char * line = nullptr;
  try
  {
    line = brevnov::getline(std::cin, stop);
  }
  catch (const std::bad_alloc& e)
  {
    std::cerr << "Not enough memory\n";
    return 1;
  }
  if (*line == 0)
  {
    std::cerr << "Empty input\n";
    delete[] line;
    return 1;
  }
  std::cout << std::boolalpha << classbrevnov::isExpression(line) << "\n";
  delete[] line;
  return 0;
}

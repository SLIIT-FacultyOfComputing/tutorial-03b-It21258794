#include <iostream>


void print(int len, int wth);
void input(int &length, int &width);

// Do not change the main() function
int main() {
   int length = 10, width = 5;
   input(length, width);
   print(length, width);
   return 0;
}

// Do not change the print() function
void print(int len, int wth) {
  std::cout << "Length : " << len 
        << ", Width  : " << wth <<std::endl;
}

// Implement the Input Function here
void input(int &length, int &width)
{
  std::cout<<"Length :";
  std::cin>>length;

  

  std::cout<<"Width :";
  std::cin>>width;
  
}

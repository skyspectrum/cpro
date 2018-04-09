#include <iostream>
using namespace std;

int main(int argc, char *argv[]){
  int i = 0x04030201;
  cout << "sizeof int is: " << sizeof(int) << endl;
  char *a = (char*)&i;
  cout << "the 4rd element of a is: " << (int)a[0] << endl;

}

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main() {
  ifstream fe;
  fe.open("input.txt",  ios::in | ios::binary);
  char cadena[128];
  int ntest;
   
  fe >> ntest;
   
  cout << ntest << endl;
   
  for(int i= 0; i < ntest; i++) {
    fe >> cadena;
    cout << cadena << endl;
  }
  fe.close();
  return 0;
}

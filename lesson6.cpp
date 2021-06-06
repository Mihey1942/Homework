#include <iostream>
#include <string>
#include <fstream>

using namespace std;

//void unfile();  
  
int main(){

  
    //1 
    ofstream one, two;
    one.open("One_test.txt", ios::out);
    two.open("Two_test.txt", ios::out);
   if (!one || !two) {
      one << "Error open file ";
      two << "Error open file ";
   }
   else{
       for (int i = 1; i < 50; i++){
       one << i + 1 * 2; 
       two << i + 1 * 3; 
       }
   }
    one.close();
    two.close();    

char a;
while ( !one.eof() ){
two << a;
}
one.close();
two.close();
}
    //2 
/*void unfile();  
char a;
while (one.get(a) && !one.eof() ){
two << a;
}
one.close();
two.close();
}*/
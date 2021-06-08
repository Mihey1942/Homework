#include <iostream>
#include <string>
#include <fstream>

//1
#define DCH(x,y) (((x) < (y)) ? (1) : (0) ) 

//2
#define DMAS(q,w) (cb)

//3


using namespace std;

  
int main(){
  
  int x, y, q, w;
  int **cb[10][10]={};
  int a[10]={1,2,3,4,5,6,7,8,9,10};
  //
  std::cin >> x >> y;
  std::cout << DCH(x,y)<< std::endl;
  //
  printf("Input 2 numders ");
  std::cin >> q >> w;
  std::cout << DMAS(q,w) << std::endl;
   
}

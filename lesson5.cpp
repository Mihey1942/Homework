#include <iostream>
#include <random>

using namespace std;
//6________________________________________
//#include mydata.h

//int func1(int* ar, int j );
//int func2(int* mas, int i );


//1_________________________________________
int func1(int* ar, int j ){
    for (int j = 0; j < 10; j++) {
        ar[j] = (ar[j]-1)*-1;
        std::cout << ar[j] <<" ";
    }
}

//2__________________________________________
int func2(int* mas, int i ){
    mas[0] = 1;
    std::cout << mas[0] <<" ";
    for (int i = 1; i < 8; i++){
        mas[i] = mas[i-1] + 3;
        std::cout << mas[i] <<" ";
    }
}




int main(){
    
    int ocm[10];
    int ar[10] = {1,1,0,1,0,0,0,1,0,0};
    int mas[8] = {};     // 1 4 7 10 13 16 19 22
  
    func1(ar, 10); 
    std::cout <<" "<< std::endl;  
    func2(mas, 8);
    std::cout <<" "<< std::endl; 
  //funcSet::funcRes(8,8);
   

}

//int func2(int* ocm)




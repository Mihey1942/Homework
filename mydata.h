namespace funcSet{
//1
int funcRes(int arr, int i ){
    for (int i = 0; i < 10; j++) {
        arr[i] = (arr[i]-1)*-1;
        std::cout << arr[i] <<" ";
    }
}

//2
int funcRes(int arr, int i ){
    arr[0] = 1;
    std::cout << arr[0] <<" ";
    for (int i = 1; i < 8; i++){
        arr[i] = arr[i-1] + 3;
        std::cout << arr[i] <<" ";
    }
}
}
#include <iostream>
typedef struct Valores
{
    int array1[10];
    int array2[10];
    int value;
    void setArray1Value(int array[10]){
        for (size_t i = 0; i < 10; i++)
        {
           array1[i]=array[i];
        }
        
    };
    void setArray2Value(int array[10]){
        for (size_t i = 0; i < 10; i++)
        {
           array2[i]=array[i];
        }
    };
};
typedef struct Result{
    int value1;
    int value2;
};

bool sumOfTwo(Valores *valores){
    Result resultados[100];
    int valueSearched = valores->value;
    int resultadosIndex =0;
    for(int i = 0 ; i<10;i++){
        for(int j = 0 ; j<10; j++){
            int value1 = valores->array1[i];
            int value2 = valores->array2[j];
            if(value1+value2==valueSearched){
                Result resultado;
                resultado.value1=value1;
                resultado.value2=value2;
                resultados[resultadosIndex]=resultado;
                resultadosIndex++;
            }
        }
    }
    if(resultadosIndex!=0){
        for(int k =0;k<resultadosIndex;k++){
            std::cout<<"Valor1:"<<resultados[k].value1<<" "<<"Valor2: "<<resultados[k].value2<<"\n----------\n";
        }
        return true;
    }
    return false;
}

int main(){
    char option;
    Valores valores;
    valores.value=14;
    int array1[10] = {1,2,3,4,5,6,7,8,9}; 
    int array2[10] = {1,2,3,4,5,6,7,8,9}; 
    valores.setArray1Value(array1);
    valores.setArray2Value(array2);
    sumOfTwo(&valores);
    std::cin>>option;
    return 0;
}
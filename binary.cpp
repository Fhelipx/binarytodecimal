#include <iostream>
#include <math.h>

int binarytoNumber(std::string binary)
{
    int decimalArray[binary.length()];
    int decimal = 0;
    
    for(int i = 0; i < binary.length(); i++)
    {
        if(binary[(binary.length() - i) - 1] != '0')
        {
            decimalArray[i] = pow(2, i);
        }
        else
        {
            decimalArray[i] = 0;
        }
    }
     
    for(int i = 0; i < (sizeof(decimalArray)/sizeof(int)); i++)
    {
        decimal += decimalArray[i];
    }  
    
    return decimal;
}

int main() 
{
    std::cout << binarytoNumber("11101010010101010"); //119978
    return 0;
}

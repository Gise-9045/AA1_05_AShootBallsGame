#include"MathContent.h"


int randomNumber(int min, int max) 
{
    //generador random
    int result = rand() % (max - min + 1) + min;
    return result;
}

#include <stdio.h>
int * sum(int * array);

int main(void)
{
    int array[5] = { 1, 2, 3, 4, 5 };

    printf("The array is %p\n", array);
    printf("The array is %p\n", sum(array));

    return 0;
}

int * sum(int * array)	//array进来的时候就是array的地址
{
    int * tot;
    tot = array;	//所以tot直接取array的值就是他的地址，如果&array就变成
    			//这个函数储存array进来的值（地址）的位置
    return tot;
}

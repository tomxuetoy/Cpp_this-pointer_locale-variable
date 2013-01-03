#include <stdio.h>

class Fruit
{
public:
    Fruit(int wg):weight(wg){}
    void peel();
private:
    int weight, calories_per_oz;
};

void Fruit::peel()
{
    printf("this ptr = %p\t", this);
    this->weight++;
    weight++;
    //private variable cannot be exposed, by Tom Xue
    printf("weight=%d\n", this->weight);
}

//above code cannot be in main(), by Tom Xue

main()
{
    Fruit apple(9);
    printf("address of apple=%x\n\n", &apple);
    apple.peel();
}

/*
$ ./a.out
address of apple=bfa4c978

this ptr = 0xbfa4c978	weight=134513771
*/

/*
134513771-1 = 128M
*/

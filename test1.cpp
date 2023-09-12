#include <stdio.h>
struct test1
{
private:
    int x;

public:
    int y;
};

int main()
{
    struct test1 ob1;
    // ob1.x = 10;
    ob1.y = 20;
    // printf("x= %d\n", ob1.x);
    printf("y= %d\n", ob1.y);
    return 1;
}
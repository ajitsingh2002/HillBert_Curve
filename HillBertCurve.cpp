#include <simplecpp>

void hilbert(int order,int angle,int size){
    if(order == 0)
        return;

    left(angle);
    hilbert(order-1,-angle,size);

    forward(size);
    right(angle);
    hilbert(order-1,angle,size);

    forward(size);
    hilbert(order-1,angle,size);

    right(angle);
    forward(size);
    hilbert(order-1,-angle,size);
    left(angle);

}

main_program{
    int order;
    cin >> order;
    int size = 100;
    int s = size/(1<<( order-1));
    turtleSim();
    penUp();
    right(-90);
    right(-90);
    forward(200);
    right(90);
    right(90);
    penDown();
    hilbert(order,90,s);
    wait(2);
}


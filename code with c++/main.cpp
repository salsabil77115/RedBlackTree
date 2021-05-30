#include <iostream>
#include "RBT.h"

using namespace std;

int main()
{

RBT x;
x.insertnode(20);
x.insertnode(10);
x.insertnode(15);






x.inorderHelper(x.root);
cout<<"-------------------------------"<<endl;

x.Delete(15);
x.inorderHelper(x.root);

    return 0;
}

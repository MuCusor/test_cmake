#include <iostream>
#include publish.h
using namespace std;
int main()
{
    client a_client;
    a_client.id=1;
    a_client.value=2;

    cout<<"client id:"<<a_client.id<<"value:"<<a_client.value<<endl;
}


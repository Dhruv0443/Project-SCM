#include <iostream>
#include <queue>
using namespace std;

int main(){
    queue <int> q;

    int i;
    int a;
    for (i = 1; i<=5; i++){
        cout << "Enter the element = ";
        cin >> a;
        q.push(a);

    }


   return 0;
    for (i = 1; i<=5; i++){
        cout << q.front()<<endl ;
        q.pop();


    }


}


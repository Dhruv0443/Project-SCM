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

vector<int> A{1,2,3,4,5,7};

    A.pop_back();



    A.push_back(7);

    for (auto it=A.begin();it!=A.end();++it)
        cout<<' '<<*it;

cout<<endl;
    if(A.empty())
    {
    else{cout<<"Vector isn't empty"<<endl;}

    cout<<A.size()<<endl;




   return 0;
    for (i = 1; i<=5; i++){
        cout << q.front()<<endl ;
        q.pop();


    }


}


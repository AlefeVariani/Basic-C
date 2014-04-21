#include <iostream>
#include <queue>
#include <stack>

// Alefe, William e Lucas

using namespace std;

int main () {

    stack <int> mystack;
    queue <int> myqueue;
    int aux;

    while (myqueue.size() < 10) {
        cout << "Informe valor: ";
        cin >> aux;
        myqueue.push(aux);
    }

    cout << "Fila correta" << endl;

    while (!myqueue.empty()) {
        mystack.push(myqueue.front());
        aux = myqueue.front();
        cout << aux << endl;
        myqueue.pop();

    }

    cout << "Fila invertida" << endl;

    while (!mystack.empty()) {
        myqueue.push(mystack.top());

        mystack.pop();
        aux = myqueue.front();
        cout << aux << endl;
        myqueue.pop();
    }

return 0;
}


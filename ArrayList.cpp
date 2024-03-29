

#include "ArrayList.h"
#include <iostream>
#include <cstdlib>

using namespace std;
ArrayList::ArrayList() {
    A = new int[4];
    length = 0;
    allocSize = 4;
}

int ArrayList::getSize() const {
    return length;
}

void ArrayList::resize(int newSize) {
    // crear nuevo arreglo
    int *tmp = new int[newSize];

    // copiar valores del viejo alcout << "error.." << endl; nuevo
    int validLength = newSize < length ? newSize : length;
    for (int i = 0; i < validLength; i++)
        tmp[i] = A[i];

    delete [] A;

    // hacer que A apunte al nuevo arreglo
    A = tmp;

    allocSize = newSize;
}

int ArrayList::at(int pos) const {
    if ( pos < 0 || pos >= length) {
        exit(1);
    }
    else {
        return A[pos];
    }
}

void ArrayList::append(int element) {
    insertAt(element, length);
}


void ArrayList::insertAt(int element, int pos) {
    if (pos < 0 || pos > length) {
        cout << "Error en posicion." << endl;
        exit(1);
    }
    if (length == allocSize) resize(allocSize * 2);
    for (int i = length - 1; i >= pos; i-- )
        A[i + 1] = A[i];
    A[pos] = element;
    length++;
}

void ArrayList::prepend(int element) {
    insertAt(element, 0);
}

void ArrayList::remove(int pos) {
    if (pos < 0 || pos >= length) {
        cout << "Error durante remocion" << endl;
        exit(1);
    }
    for (int i = pos; i < length -1; i++)
        A[i] = A[i+1];
    length--;
}

ArrayList::~ArrayList() {
    delete [] A;
}

ArrayList& ArrayList::operator=(const ArrayList &b) {
    if(&b != this) {
        length = b.length;
        allocSize = b.allocSize;

        delete[] A;
        A = new int[b.allocSize];
        for (int i = 0; i < b.length; i++)
            A[i] = b.A[i];
    }
    return *this;
}


ArrayList& ArrayList::operator+(const ArrayList &b) {
   length = length-1 + b.length;

    for(int i = 0;i < b.length;i++)
    {
        append(b.A[i]);
    }
    return *this;

}

void ArrayList::removeOdds() {
    int a = 0;
    for (int i = 0; i < length;i++)
    {
        if(A[i]%2==0)
        {
            swap(A[i],A[a++]);
        }
    }
    length = a;
}
void ArrayList :: mode() const {

    int *B= new int[length];

    int count = 0;
    int number = 0;
    for(int i = 0; i < length;i++)
    {
        B[A[i] - 1]++;

        if(count < B[A[i]-1])
        {
            count = B[A[i]-1];
            number = A[i];
        }

    }

    for(int i = 0; i < length; i++)
    {
        if(count == B[A[i]-1] && number != A[i])
            cout << "None"<< endl;
        else
            cout << number << endl;
    }

}

void ArrayList::print() const {
    for (int i = 0 ; i < length; i++)
        cout << A[i]<< " ";
    cout << endl;
}
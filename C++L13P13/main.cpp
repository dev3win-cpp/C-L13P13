//
//  main.cpp
//  C++L13P13
//
//  Created by Tadeusz Potoniec on 25/01/2023.
//  Based on https://www.youtube.com/watch?v=ErOzmh3BiXU&list=PLOYHgt8dIdoxx0Y5wzs7CFpmBzb40PaDo and with help chat.openai

#include <iostream>

using namespace std;
int z;
long int fib(int n)
{
    if (n==1 || n==2) return 1;
    else return fib(n-1)+fib(n-2);
}

int main() {
        cout<<"Hey! I'm pointing out the numbers in the Fibbonati sequence. Which number from the Fibbonati sequence would you like to see on the screen?"<<endl;
        cin>>z;
        cout<<z<<" number from the Fibbonati sequence is "<<fib(z)<<endl;
    
    return 0;
}

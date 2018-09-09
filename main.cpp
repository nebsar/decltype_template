/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Eagleye
 *
 * Created on September 8, 2018, 9:57 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */

template<typename T1, typename T2>

T2 add(T1 a, T2 b) {
    return a + b;
}

int main() {
    cout << add(1, 1.8) << endl; // T2 = add(T1,T2), since T2=1.8 and is float type and since @return type is T2 result is float type.
    cout << add(1.8, 1) << endl; // T2 = add(T1,T2), since T2=1 and is integer type and since @return type is T2 result is integer type.
}


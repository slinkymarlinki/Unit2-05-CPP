// Copyright (c) 2023 Marli Peters
// Created by: Marli Peters
// Created on: Oct. 4, 2023
// This program shows how local and global variables work.

#include <iostream>

// global variable
int variableX = 28;

void localVariable() {
    // this shows what happens with local variables
    int variableX = 4;
    int variableY = 36;
    int variableZ;

    variableX = variableX + 3;
    variableZ = variableX + variableY;

    printf("Local variableX, variableY, variableZ: %d + %d = %d\n",
variableX, variableY, variableZ);
}

void globalVariable() {
    // this shows what happens with global variables
    int variableY = 6;
    int variableZ;

    variableX = variableX + 18;
    variableZ = variableX + variableY;

    printf("Local variableX, variableY, variableZ: %d + %d = %d\n",
variableX, variableY, variableZ);
}

int main() {
    // this function calls local and global
    localVariable();
    globalVariable();

    printf("\n Done. \n");
    return 0;
}

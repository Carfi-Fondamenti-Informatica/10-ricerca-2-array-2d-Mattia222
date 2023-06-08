//
// Created by Mattia Tacchini on 04/06/2023.
//

#include <iostream>
#include "lib.h"
using namespace std;
void init (char mat[], int n){
    for(int i=0;i<n;i++){
        mat[i]= ' ';
    }
}
void init(char mat[5][15]){
    for(int i=0;i<5;i++){
        init(mat[i],15);
    }
}
void inserimento(char nomi[5][15], char cognomi[5][15]) {
    for (int i = 0; i < 5; i++) {
        inserimento(nomi[i], 15);
        inserimento(cognomi[i], 15);
    }
}

void inserimento(char mat[], int x){
    char num[x*10];
    init(num,x*10);
    cin >> num;
    for(int i=0;i<x;i++){
        mat[i]=num[i];
    }
}

int ricerca(char nomi[5][15], char cognomi[5][15], char Nome[15], char Cognome[15]){
    int j;
    for(int i=0;i<5;i++){
        for(j=0;j<15;j++){
            if (cognomi[i][j]!=Cognome[j]){
                break;
            }
            if (nomi[i][j]!=Nome[j]){
                break;
            }
        }if(j==15){
            return i;
        }
    }
    return -1;
}

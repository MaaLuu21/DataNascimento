#include <iostream>
#include <stdio.h>
#include <time.h>

using namespace std;

typedef struct Data{
    int dia, mes, ano;
};

typedef struct DataAtual{
    int dia,mes,ano;
};

int main(void) {
    Data data;
    DataAtual dataAtual;
    int idade=0;

    time_t mytime;
    mytime = time(NULL);
    struct tm tm = *localtime(&mytime);
    //cout << tm.tm_mday << "/" <<  tm.tm_mon + 1 << "/" <<  tm.tm_year + 1900;

    dataAtual.dia = tm.tm_mday;
    dataAtual.mes = tm.tm_mon + 1;
    dataAtual.ano = tm.tm_year + 1900;

    cout <<"Dia:";
    cin >> data.dia;

    cout << "\nMes:";
    cin >> data.mes;

    cout << "\nAno:";
    cin >> data.ano;

    idade = dataAtual.ano - data.ano - 1;

    if(data.dia == dataAtual.dia && data.mes == dataAtual.mes){
        idade+=1;
    }

    cout << idade;
}